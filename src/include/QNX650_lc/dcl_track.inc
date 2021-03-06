;----------------------------------------------------------------------------
CLASS_UP  = 0001H
CLASS_KP  = 0003H
CLASS_SP  = 0005H
CLASS_PG  = 0006H


EVEN_BOUND_OBJ = 'E'
ODD_BOUND_OBJ  = 'O'

;----------------------------------------------------------------------------
GenBox  MACRO Lbox,Nbox,FlagBox,cntItem,minTime,maxTime,TypeBox
        Local Lab
_CntBox = _CntBox + 1
Lab:
        DD LinkBox      ;; ��������� �� ��������� ������ � ������
        KodName <Nbox>  ;; ��� �������
		DB	&TypeBox	;; ��� ������� 'S'/'P' - �������/�������
        DB	&FlagBox	;; �������� ��������
        DW cntItem      ;; ���������� ����-�������� �� ��������
        DW minTime      ;; ����������� ����� ���� �� ��������
        DW maxTime      ;; ������������ ����� ���� �� ��������
        DD 0            ;; ��������� �� ������ ����� � �������
        DD 0            ;; ��������� �� ��������� ����� � �������
box&Lbox = Lab
LinkBox = Lab
        ENDM
;----------------------------------------------------------------------------
DclStnBox MACRO LstBox0,LstBox1
	IfNb	<LstBox0>
		GenBox LstBox0,0,0,0,'S'
	EndIf
	IfNb	<LstBox1>
		GenBox LstBox1,0,0,0,'S'
	EndIf
ENDM
;----------------------------------------------------------------------------
DclPrgBox MACRO LstBox0,LstBox1
	IfNb	<LstBox0>
		GenBox LstBox0,'P'
	EndIf
	IfNb	<LstBox1>
		GenBox LstBox1,'P'
	EndIf
ENDM

;----------------------------------------------------------------------------
DclTrackKrg  MACRO KodKrg,NumKrug,TypeKrug,ListStn
        Local Lab
Lab:
        DD LinkKrg            ;; ��������� �� ��������� ���� � ������
        KodName <KodKrg>      ;; ��� �����
        DW 0&NumKrug&H        ;; ����� �����
		DB	&TypeKrug         ;; ������� ���� ����� 'O'/'S' - ��������/�������� (�������� �������������� ������ �� �������� ������)
        DW 2                  ;; ������� ������ ����� ��� ��������� ���������� ������
        DW 3                  ;; ������� �������� ����� ��� ��������� ���������� ������
        FOR xStn,<ListStn>
         IFNB <xStn>
          DD stn&xStn      ;; ��������� �� ��������� ������� � ������
         ENDIF
        ENDM
        DD 0               ;; ������� ��������� ������ ������� � �����
LinkKrg = Lab
        ENDM

;----------------------------------------------------------------------------
DclTrackStn  MACRO KodStn,NetNumStn,Lbox,LstPrg,NameArmOC
        Local Lab
_CntStn = _CntStn + 1
Lab:
        DD LinkStn         ;; ��������� �� ��������� ������� � ������
        DB '&KodStn'       ;; ��� �������
        EcpStn NetNumStn  ;; ������� �������� �������
        DD LinkKrg         ;; ��������� �� ����, �������� ����������� �������
        DD box&Lbox        ;; ��������� �� ������, �������� ����������� �������
        DD LinkObj         ;; ������ ��������, �������������� �� �������
		IFNB <NameArmOC>
            DB  @CatStr(!',@SubStr(&NameArmOC, 2, @SizeStr(&NameArmOC) -2),!'),0  ;; ��� STDP-������� ��� �������� ������, � ������� ���������� ����� �� ���� �������
		ELSE
			DB 7 DUP(0)
		ENDIF
        FOR Ti,<LstPrg>
         IFNB <Ti>
          DD prg&Ti        ;; ��������� �� ��������� ����������� �������
         ENDIF
        ENDM
        DD 0               ;; ������� ��������� ������ ����������� ���������
LinkObj = 0
LinkStn = Lab
stn&KodStn = Lab
        ENDM

;----------------------------------------------------------------------------
DclPrg  MACRO Lprg,KodPrg,Lbox,LstStn
        Local Lab
Lab:
        DD LinkPrg         ;; ��������� �� ��������� ������� � ������
        KodName <KodPrg>   ;; ��� ��������
        DD box&Lbox        ;; ��������� �� ������, �������� ����������� ������
        FOR Ti,<LstStn>
         IFNB <Ti>
          DD stn&Ti        ;; ��������� �� �������, � ������� ��������� �������
         ENDIF
        ENDM
        DD 0               ;; ������� ��������� ������ �������
LinkPrg = Lab
prg&Lprg = Lab
        ENDM

;----------------------------------------------------------------------------
DclObj  MACRO Lobj,ClsObj,KodObj,KodStn,Lbox,LstLink,TypeObj,NumPark,NumPut,KodStnNext,KodStnNextUzl,KodNsu
        Local Lab
Lab:

        DD LinkObj         ;; ��������� �� ��������� ������ � ������
        DW ClsObj          ;; ����� �������
        KodName <KodObj>   ;; ��� �������
		IFNB <TypeObj>
			DB TypeObj     ;; ������� ���� ������� E/O - ��������� ������ ����� ��� �������/��������� �����������
		ELSE
			DB ' '
		ENDIF
        DD stn&KodStn      ;; ��������� �� �������, ������� ����������� ������
        DD box&Lbox        ;; ��������� �� ������, �������� ����������� ������
		IFNB <NumPark>
			DB NumPark     ;; ����� ����� ��� ������� ����
		ELSE
			DB 0
		ENDIF
		IFNB <NumPut>
			DB NumPut      ;; ����� ���� ��� ������� ����
		ELSE
			DB 0
		ENDIF
		IFNB <KodStnNext>
			DD stn&KodStnNext  ;; ��������� �� ��������� ������� � ���� ����������� (��� ��/��)
		ELSE
			DD 0
		ENDIF
		IFNB <KodStnNextUzl>
			DD stn&KodStnNextUzl  ;; ��������� �� ��������� ������� ������� � ���� ����������� (��� ��/��)
		ELSE
			DD 0
		ENDIF
		IFNB <KodNsu>
			DW KodNsu      ;; ����� ��� ������, ���� ����������� �� �������
		ELSE
			DW 0
		ENDIF
		DB 6 DUP(0)        ;; ������
        FOR Ti,<LstLink>
         IFNB <Ti>
          DD obj&Ti        ;; ��������� ������ �� ������ ���������� ������
         ENDIF
        ENDM
        DD 0               ;; ������� ��������� ������ ���������� ������
LinkObj = Lab
obj&Lobj = Lab
        ENDM

;----------------------------------------------------------------------------
BegTrack MACRO
OPTION MZ :20h ;;����� ������ ������� ��������
STACK segment para STACK 'STACK'
STACK ends

Cseg Segment PUBLIC  Byte 'CODE'
        ASSUME  CS:Cseg
start:
LinkKrg = 0
LinkStn = 0
LinkPrg = 0
LinkObj = 0
LinkBox = 0
_CntStn = 0
_CntBox = 0
;        DW MaxNumStn      ;;  ���������� �������
;        DW MaxNumBox      ;;  ���������� ��������
        DD _DclKrg     ;; ��������� �� ������ ���� � ��������
        DD _DclStn     ;; ��������� �� ������ ������� � ��������
        DD _DclBox     ;; ��������� �� ������ ������ � ��������
;       DD _BegStr     ;;
;_BegStr:
;       DB "Begin_Struct_IndexSpp->"
        ENDM

;----------------------------------------------------------------------------
EndTrack MACRO
_DclKrg = LinkKrg
_DclStn = LinkStn
_DclBox = LinkBox
MaxNumStn = _CntStn
MaxNumBox = _CntBox
Cseg    ENDS

end start
        ENDM
