??Par43  =  2Bh        ;; ��� +
??Par45  =  2Dh        ;; ��� -
??Par48  =  '0'        ;; ��� 0
??Par49  =  '1'+80h    ;; ��� 1
??Par50  =  '2'+80h    ;; ��� 2
??Par51  =  '3'        ;; ��� 3
??Par52  =  '4'+80h    ;; ��� 4
??Par53  =  '5'        ;; ��� 5
??Par54  =  '6'        ;; ��� 6
??Par55  =  '7'+80h    ;; ��� 7
??Par56  =  '8'+80h    ;; ��� 8
??Par57  =  '9'        ;; ��� 9
??Par192 =  61h+80h    ;; ��� �
??Par224 =  61h+80h    ;; ��� �
??Par193 =  62h+80h    ;; ��� �
??Par225 =  62h+80h    ;; ��� �
??Par194 =  63h        ;; ��� �
??Par226 =  63h        ;; ��� �
??Par195 =  64h+80h    ;; ��� �
??Par227 =  64h+80h    ;; ��� �
??Par207 =  70h+80h    ;; ��� �
??Par239 =  70h+80h    ;; ��� �
??Par196 =  65h        ;; ��� �
??Par228 =  65h        ;; ��� �
??Par204 =  6Bh+80h    ;; ��� �
??Par234 =  6Bh+80h    ;; ��� �
??Par204 =  6Dh+80h    ;; ��� �
??Par236 =  6Dh+80h    ;; ��� �
??Par205 =  6Eh+80h    ;; ��� �
??Par237 =  6Eh+80h    ;; ��� �
??Par215 =  7Eh        ;; ��� �
??Par247 =  7Eh        ;; ��� �
??Par206 =  6Fh        ;; ��� �
??Par238 =  6Fh        ;; ��� �
??Par209 =  72h        ;; ��� �
??Par241 =  72h        ;; ��� �

;       ���� ������ ��  (�������� �� �������)
;-----------------------------------------------------
CMD_NP      EQU     07H     ;�������� �����
CMD_ONP     EQU     0BH     ;������ ��������� ������
CMD_NO      EQU     0DH     ;�������� �����������
CMD_ONO     EQU     0EH     ;������ ��������� �����������
CMD_NSK     EQU     13H     ;�������� �������� �������
CMD_ONSK    EQU     15H     ;������ ��������� ��������� ��������
CMD_ADN     EQU     16H     ;������������ ��������
CMD_OADN    EQU     19H     ;������ ��������� ������������
CMD_TO      EQU     1AH     ;������ �����������
CMD_OTO     EQU     1CH     ;������ ������� �����������
CMD_AD      EQU     21H     ;������������
CMD_OAD     EQU     22H     ;������ ������������
CMD_TP      EQU     23H     ;������ �����
CMD_OTP     EQU     25H     ;������ ������� ������
CMD_TSK     EQU     26H     ;������ ������� �������
CMD_OTSK    EQU     29H     ;������ ������� ��������� ��������
CMD_ADT     EQU     2AH     ;������ ������������
CMD_OADT    EQU     2CH     ;������ ������� ������������
CMD_MNV     EQU     31H     ;���������� �������
CMD_OMNV    EQU     32H     ;������ ����������� ��������
CMD_MR      EQU     34H     ;�������
CMD_OMR     EQU     38H     ;������ ��������
CMD_PRS     EQU     43H     ;������� �������
CMD_MUP     EQU     46H     ;������� ����������
CMD_OMUP    EQU     49H     ;������ �������� ����������
;CMD_SU      EQU     4AH     ;�������� ����������
;CMD_OSU     EQU     4CH     ;������ ��������� ����������
CMD_WA      EQU     51H     ;����� �������������
;CMD_ONB     EQU     52H     ;������ ������
CMD_ROP     EQU     54H     ;��������� �� ����� ��������� �������
CMD_RVP     EQU     58H     ;���������� � ����� ��������� �������
;CMD_GS      EQU     68H     ;��������������� �����
CMD_SG      EQU     70H     ;swetofor otkrytx
;CMD_RS      EQU     72H     ;����������
CMD_WSA     EQU     77H     ;��������������� ������� �������
CMD_OSG     EQU     83H     ;swetofor zakrytx
;CMD_WDSN    EQU     85H     ;��������� ���
;CMD_ODSN    EQU     86H     ;������ ��������� ���
;CMD_OGS     EQU     89H     ;������ ��������������� �����
CMD_WT      EQU     8AH     ;����� � ��������
CMD_SMN     EQU     8CH     ;����� �����������

;CMD_IR      EQU     91H     ;������������� ��������
;CMD_oipsr   EQU     92H     ;������ ���������� �������� ������� ���������������
;CMD_ozp     EQU     92H     ;������ �������� (�.�. �������� ��������)
;CMD_isp     EQU     93H     ;���������� �������� �������
;CMD_WDG     EQU     94H     ;��������� ���
;CMD_ODG     EQU     98H     ;��������� ���
CMD_URO      EQU     9AH     ;���������� �����������
CMD_UORO     EQU     9CH     ;������ ���������� �����������
CMD_RAB      EQU     0A1H    ;������� ������� �������
;CMD_PRW     EQU     0A2H    ;������ ��������������� �������
CMD_VOS      EQU     0A4H    ;��������� �������� �������
CMD_OVOS     EQU     0A8H    ;���������� �������� �������
;CMD_oipsp   EQU     0B0H    ;������ ���������� �������� ������� �������
CMD_RH       EQU     0B2H    ;��������� ������� �������
CMD_ORH      EQU     0B4H    ;���������� ������� �������
;CMD_uper    EQU     0E0H    ;���������� ���������

Type_tGorl  = 0000h
Type_nGorl  = 0008h
Gorochniy   = '�'     ;; ���  �
Fiktivniy	= '�'
;;----------------------------------------------------------------------------
;;----------  �������� ������� -----------------------------------------------
;;----------------------------------------------------------------------------
DclObj  MACRO ClsObj,KodObjRts,KodObjLc,Options
	Local Lab

TypePar	= 0000h
;;Cls_Prm	= 0000h ;; �������� � ����� (��������� TypeObj)
UsePar	= 0

KolObjStn	=  KolObjStn + 1
Lab:
	DD LinkObj				;; ��������� �� ��������� ������ � ������
	DD 0					;;��������� ����� ��� �������� ������ ������� �� rts(��� ��������� ������) 
;;-------------------��� � �����------------------------------------
	IFNB <Options>
		FOR Opt,<Options>
			UsePar = 0 ;;���� ���������������� ���������
			IFIDN <?CLS&ClsObj>,<?CLSKS> ;;���� ������ �������� ����������
				IFIDN <'&Opt'>,<'tGorl'>
					TypePar = TypePar OR Type_tGorl ;�������� ����������� ������ ���������
					UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'nGorl'>
					TypePar = TypePar OR Type_nGorl ; �������� ����������� �������� ���������
					UsePar = 1
				ENDIF
				IF (@CatStr(!',@SubStr(&Opt, 2, @SizeStr(&Opt) -2),!') EQ '�') OR (@CatStr(!',@SubStr(&Opt, 2, @SizeStr(&Opt) -2),!') EQ '�')
					TypePar = TypePar OR 0004h ; �������� ��������
					UsePar = 1
				ENDIF
				IF (@CatStr(!',@SubStr(&Opt, 2, @SizeStr(&Opt) -2),!') EQ '�') OR (@CatStr(!',@SubStr(&Opt, 2, @SizeStr(&Opt) -2),!') EQ '�')
					TypePar = TypePar OR 0010h ; �������� ���������
					UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSPG> ;;���� ������ �������� PG
				IFIDN <'&Opt'>,<'Pg_Mnim'>
					TypePar = TypePar OR 0080h  ;������ ���������� �������
					UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSUP> ;;���� ������ �������� UP
				IFIDN <'&Opt'>,<'PG_no_ts'>
					TypePar = TypePar OR 0080h  ;������� ��, ������ ������� �� ��������������
					UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSKP> ;;���� ������ �������� KP
				IFIDN <'&Opt'>,<'NoPutErr'>
						TypePar = TypePar OR 0080h  ;�� �������� �������������
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'NoAddMar'>
						TypePar = TypePar OR 0020h  ;�� �������� �������������
						UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSST> ;;���� ������ �������� ST
				IFIDN <'&Opt'>,<'NoPutErr'>
						TypePar = TypePar OR 0080h  ;�� �������� �������������
						UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSSP> ;;���� ������ �������� SP
				IFIDN <'&Opt'>,<'NoPutErr'>
						TypePar = TypePar OR 0080h  ;�� �������� �������������
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'NoAddMar'>
						TypePar = TypePar OR 0020h  ;�� �������� �������������
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'LastRCStn'>
						TypePar = TypePar OR 0040h  ;������� �� �������(��� ���� �������)
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'SPasKP'>
					TypePar = TypePar OR 0010h	;������ � ���� ����(����������� ���� �� � ����� ������� �������� ����������)
					UsePar = 1
				ENDIF
			ENDIF

			IFIDN <'&ClsObj'>,<'TM'> ;;���� ������ �������� ��������
				UsePar = 1
			ENDIF
			
			IF UsePar EQ 0
				.ERR   <���������������� �������� ��� ����������� �������, �����:���:�������� - &ClsObj:&KodObjRts:&Opt>
			ENDIF
		ENDM
	ENDIF
	
	IFIDN <'&ClsObj'>,<'TM'> ;;���� ������ �������� ��������
		DW 0
	ELSE
		DW ?CLS&ClsObj OR TypePar	;; ����� �������
	ENDIF
	
	;;--------��� �������----------	
	IFIDN <'&ClsObj'>,<'TM'> ;;���� ������ �������� ��������
		DD Options
		LCTM&Options = Lab
	ELSE
		DD 0
	ENDIF
	;------------------------------
	KodName <KodObjRts> 	;; ��� ������� � rts
	;;-------------------------------------------------------
	;;��� ��������� ������� ���� � ��������
	IFNB <KodObjLc>
		IFIDN	<'&KodObjLc'>,<'-'>
			KodName <KodObjRts>  ;; ��� ������� ��� lc
		ELSE
			KodName <KodObjLc> ;; ��� ������� � rts				
		ENDIF	
	ELSE
		KodName <KodObjRts>  ;; ��� ������� ��� lc
	ENDIF
	;;-------------------------------------------------------
		
	Dw KolComunObj		;; ����� ��������� ��������		
	DD LinkComunObj		;; ��������� �� ��������� ������

	DD 0				;; ������� ��������� ������ ���������� ������
LinkObj			= Lab
LinkComunObj	= 0
KolComunObj		= 0
ENDM
;;----------------------------------------------------------------------------
;;----------  �������� ���������� ������� ------------------------------------
;;----------------------------------------------------------------------------
CommunObj  MACRO ClsObj,KodObjRts,KodObjLc,Options
	Local Lab
KolComunObj = KolComunObj + 1
Lab:

	DD LinkComunObj				;; ��������� �� ��������� ��������� ������
	DD 0						;;��������� ����� ��� �������� ������ ������� � rts(��� ��������� ������)
	Dw ?CLS&ClsObj				;; ����� �������
	
	KodName <KodObjRts>			;; ��� ������� � rts
	;;-------------------------------------------------------
	;;��� ��������� ������� ���� � ��������
	IFNB <KodObjLc>
		IfIdn	<'&KodObjLc'>,<'-'>
			KodName <KodObjRts>  ;; ��� ������� ��� lc
		ELSE
			KodName <KodObjLc> ;; ��� ������� � rts				
		ENDIF	
	ELSE
		KodName <KodObjRts>  ;; ��� ������� ��� lc
	ENDIF
	;;-------------------------------------------------------
	DD 0	;; ������� ��������� ������ ���������� ������

LinkComunObj = Lab
ENDM
;;**********************************************************
;;**********************************************************
;;**********************************************************
;;-------------------------------------------------------
;;               ��������� ������� ��
;;-------------------------------------------------------
ChangGr Macro  NameTs,NumStb,NumPlase,TypeSignal,Obj
		Local Lab
Lab:	
	DD LinkChangGr				;; ��������� �� ��������� ��������� � �������	
	Db '&NameTs',0				;;��� �������
	Db NumStb*3					;;����� ����� ��;; 3 - ��� ���, 4 - ��� ���
	Db NumPlase					;;�����
	IfIdn	<'&TypeSignal'>,<'-'>
		Db 80h		;; ����� ������
	ELSE
		Db 00h 	
		
	ENDIF
		
??TPar = 0
		IFNB <Obj>
			Off32Lc_O_U	<Obj>,0 ;;��� �������� ���-�� ��������
			IF ??TPar NE 0
				.ERR <�������� ���������� ���������� ChangGr>
			ENDIF
		ELSE
			DB 12 dup(0) ;; ������ ���������(12 ���� ������ ��������� LcParCmd �������!!!!!! � dcl_lc.h)
		ENDIF

LinkChangGr = Lab
ENDM
;;**********************************************************
;;**********************************************************
;;**********************************************************
;;-------------------------------------------------------
;;               �������� ������
;;-------------------------------------------------------
????KodP	Macro KodSym
		IfDef ??Par&KodSym
			????kp    =    (??Par&KodSym+0)
		Else
			Dw KodSym
			errcod = 1
		EndIf
	EndM
;;---------------
KodPar	MACRO  str
		FORC ??c, <str>
			IFNB <'&??c'>
				????KodP %('&??c'+0)
				Db ????kp
			ENDIF
		ENDM
ENDM
;;----------------------------------------------------------
;; ����������� ��������� �������� ��������� ������� � �������, ��� �������� �� ������������
;;----------------------------------------------------------
ChekPointerUsl MACRO Pointer
		Local kolsym
kolsym = 0
ChkSumP = 0
		FORC   ??c, <Pointer>
			IFNB <'&??c'>
				ChkSumP = ChkSumP + '&??c' + kolsym
				kolsym = kolsym + 1
			ENDIF
		ENDM
ENDM
;;----------------------------------------------------------
LcFrmNm MACRO	NmCmd,KodCmd1,KodCmd2
		Local	LabKmd,LabWrk2

LabKmd:
		Db 10 dup(0)		;; ����� ��� ������ �������
LabWrk2:

	Org LabKmd
		IFNB <'&NmCmd'>		;; � ������� �� NmCmd �����������
			KodPar <NmCmd>
		ENDIF
	Org LabWrk2

	IFNB   <KodCmd1>
		Db CMD_&KodCmd1
	ELSE
		Db 0
	ENDIF 
	
	IFNB <KodCmd2>
		Db CMD_&KodCmd2
	ELSE
		Db 0
	ENDIF 
	
ENDM
;;----------------------------------------------------------
LcFrmNm1 MACRO	NmCmd,Txt,KodCmd1,KodCmd2
		Local	LabKmd,LabWrk2

LabKmd:
		Db 10 dup(0)		;; ����� ��� ������ �������
LabWrk2:

	Org LabKmd
		IFNB <'CMD_&NmCmd'>;������ ��,��,��,��
			KodPar <NmCmd>
		ELSE
		.ERR <��� ����� ������� &NmCmd>
		ENDIF
		IFNB <'&Txt'>
			KodPar <Txt>
		ENDIF
	Org LabWrk2

	IFNB   <KodCmd1>
		Db CMD_&KodCmd1
	ELSE
		Db 0
	ENDIF 
	
	IFNB <KodCmd2>
		Db CMD_&KodCmd2
	ELSE
		Db 0
	ENDIF 
	
ENDM
;;----------------------------------------------------------
Off32Lc_O_U  MACRO   List,Kol

	FOR     xxx,<List>
		??TPar = ??TPar +01h

				IF (??TPar EQ 01h)
					IfIdn	<'&xxx'>,<'?'>
						Dw 0	
					ELSE
						Dw ?CLS&xxx    	;; ����� �������
					EndIf
				EndIf

				IF (??TPar EQ 02h)
					KodName <%@SubStr(xxx, 2, 6)> ;; ��� ������� � rts
				EndIf

				IF (??TPar EQ 03h)
					DD 0	;; ����������� ����� ��� ������ ������� �� rts 4 �����
					IfIdn <'&xxx'>,<'?'>
						Dw 0	
					ELSE
						Dw (xxx Shr 16) And 0FFFFh   ;;������� ������� 2�����
					EndIf
				EndIf

		IF	(??TPar  EQ 3)
			??TPar =   0
			IF	(Kol  EQ 1);;������� ���-�� ��������(3 ��������� = 1 ������)
				??KolList = ??KolList +1
			ENDIF
		ENDIF
	ENDM
ENDM
;;**********************************************************
Off32_S_D  MACRO   List
	FOR ??x,<List>
		??KolList = ??KolList +1
		IfIdn <'&??x'>,<'?'>
			Dd 0
		Else
			Dd ??x
		EndIf
	EndM
ENDM
;;**********************************************************
;;              ������� ������
;;**********************************************************
USL_U		MACRO   LabUsl,ListWork
		Local	LWLabUsl, locChkSumP

??TPar = 0

		IFNB <ListWork>
			Off32Lc_O_U	<ListWork>,1  ;;� ��������� ���-�� ��������
			IF ??TPar NE 0
				.ERR <�������� ���������� ����������, � ������� ������� &LabUsl>
			ENDIF
		ENDIF

LWLabUsl:
		Org LC&LabUsl
			Db ??KolList	;; ���������� ����������
		Org LWLabUsl
		
locChkSumP = ChkSumP
ChekPointerUsl LabUsl ;;�������� ChkSumP
		IFE locChkSumP EQ ChkSumP
			.ERR <� ������ ������� �������� ������ ��������� �� �������, &LabUsl>
		ENDIF
ENDM
;;**********************************************************
USL_S		MACRO   LabUsl,ListWork
		Local	LWLabUsl, locChkSumP

	Off32_S_D <ListWork>

LWLabUsl:
	Org LC&LabUsl
		Db ??KolList	  ;; ���������� ����������
	Org LWLabUsl

locChkSumP = ChkSumP
ChekPointerUsl LabUsl ;;�������� ChkSumP
		IFE locChkSumP EQ ChkSumP
			.ERR   <� ������ ������� �������� ������ ��������� �� �������, &LabUsl>
		ENDIF
ENDM
;;**********************************************************
;;         ������� ������� ��,��,��,��,����������
;;**********************************************************
LCcmdTU	MACRO   LabUsl,TextCmd,Timer
		Local	Lab;,LCLabUsl
Lab:
	DD LinkCmd ;;����� ��������� ������� ���� �������

	;;��������� �� ������
	IFNB <Timer>
		DD	(LC&Timer)
	ELSE
		DD	0
	ENDIF
	
KolCmd = KolCmd+1
errcod = 0
	LcFrmNm TextCmd
	IF errcod EQ 1
		.ERR <������ � ���� �������, &LabUsl>
	ENDIF
??KolList	=	0
??TPar = 0
	Db		'O'
LC&LabUsl:
	Db 0	;; ���������� ����������	- ����� �����������

ChekPointerUsl LabUsl ;;������� �������� ��������� ����� ����� �������� ��������� ��� ��������

LinkCmd = Lab
ENDM
;;**********************************************************
;;         ������������� ������ �� ������ ����� ��,��,��,��
;;**********************************************************
LCcmdTU1	MACRO   LabUsl,TextCmd
		Local	Lab;,LCLabUsl
Lab:
	DD LinkCmd ;;����� ��������� ������� ���� �������

KolCmd = KolCmd+1
errcod = 0
	LcFrmNm1 TextCmd
	IF errcod EQ 1
		.ERR <������ � ���� �������, &LabUsl>
	ENDIF
??KolList	=	0
??TPar = 0
	Db		'O'
LC&LabUsl:
	Db 0	;; ���������� ����������	- ����� �����������

ChekPointerUsl LabUsl ;;������� �������� ��������� ����� ����� �������� ��������� ��� ��������

LinkCmd = Lab
ENDM
;;**********************************************************
;;    ������� ������� ������ ��,��,��,��,����������
;;**********************************************************
LCcmdTUo	MACRO   LabUsl,TextCmd,Timer
		Local	Lab ;,LCLabUsl
Lab:
	DD LinkCmd  ;;����� ��������� ������� ���� �������
	;;��������� �� ������
	IFNB <Timer>
		DD	(LC&Timer)
	ELSE
		DD	0
	ENDIF
	
KolCmd = KolCmd+1
errcod = 0
	LcFrmNm TextCmd
	IF errcod EQ 1
		.ERR   <������ � ���� �������, &LabUsl>
	ENDIF

??KolList = 0
??TPar = 0
	Db		'U'

LC&LabUsl:
	Db 0	;; ���������� ���������� - ����� �����������

ChekPointerUsl LabUsl ;;������� �������� ��������� ����� ����� �������� ��������� ��� ��������

LinkCmd = Lab
ENDM
;;**********************************************************
;;         ������� ���,���
;;**********************************************************
LCcmdTU_S	MACRO   LabUsl,TextCmd
		Local	Lab ;,LCLabUsl
Lab:
		DD LinkCmd ;;����� ��������� ������� ���� �������
		
KolCmd = KolCmd+1

errcod = 0
		LcFrmNm TextCmd
		IF errcod EQ 1
			.ERR <����������� ������ � ���� �������, &LabUsl>
		ENDIF
		
??KolList = 0
		Db 'S'

LC&LabUsl:
		Db 0	;; ���������� ����������	- ����� �����������

ChekPointerUsl LabUsl ;;������� �������� ��������� ����� ����� �������� ��������� ��� ��������

LinkCmd = Lab
ENDM
;;**********************************************************
;;              ������� ������ ���,���
;;**********************************************************
LCcmdTUo_S	MACRO   LabUsl,TextCmd
		Local	Lab
Lab:
		DD LinkCmd	;;����� ��������� ������� ���� �������
		
KolCmd = KolCmd+1

errcod = 0
		LcFrmNm TextCmd
		IF errcod EQ 1
			.ERR <������ � ���� �������, &LabUsl>
		ENDIF
		
??KolList	=	0
		Db		'D'

LC&LabUsl:
		Db		0		;; ���������� ����������	- ����� �����������

ChekPointerUsl LabUsl	;;������� �������� ��������� ����� ����� �������� ��������� ��� ��������

LinkCmd = Lab
ENDM
;;**********************************************************
BegCmdTU	MACRO
Cseg	ENDS
CmdTUCseg	Segment PUBLIC  Byte 'CmdTUCseg'
		ASSUME  CS:CmdTUCseg
ENDM
;;**********************************************************
EndCmdTU	MACRO
CmdTUCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegCmdTUO	MACRO
Cseg	ENDS
CmdTUOCseg	Segment PUBLIC  Byte 'CmdTUOCseg'
		ASSUME  CS:CmdTUOCseg
ENDM
;;**********************************************************
EndCmdTUO	MACRO
CmdTUOCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
;;**********************************************************
;;**********************************************************
;;**********************************************************
;;------------------------------------------------------------------------------------------------
;;---------- ������ �������� ������� -----------------------------------------
;;------------------------------------------------------------------------------------------------
BegStnLc	MACRO KodStn,EcpStn,NameStn

OPTION MZ :20h ;;����� ������ ������� ��������
STACK	Segment para STACK 'STACK'
STACK	ends

Cseg	Segment PUBLIC  Byte 'CODE'
	ASSUME  CS:Cseg
Cseg	ENDS

CmdTUCseg	Segment PUBLIC  Byte 'CmdTUCseg'
	ASSUME  CS:CmdTUCseg
CmdTUCseg	ENDS

CmdTUOCseg	Segment PUBLIC  Byte 'CmdTUOCseg'
	ASSUME  CS:CmdTUOCseg
CmdTUOCseg	ENDS

Cseg	Segment PUBLIC  Byte 'CODE'
	ASSUME  CS:Cseg

start:

KolObjStn	=  0
KolCmd		=  0
KolComunObj	=  0

	IF	@SizeStr(KodStn) NE 6
		.ERR <�������� ���������� �������� � ���� �������>
	ENDIF
	IF	@SizeStr(EcpStn) NE 6
		.ERR <�������� ���������� �������� � ������� ��������>
	ENDIF

	DB KodStn,0						;; ��� �������
	NetMark EcpStn					;; ������� �������� �������
	DW KolObjStn_MainStuct			;; ����� �������� �������	
	DD LinkObj_MainStuct			;; ����� ���������� ��������	
	DW KolCmd_MainStuct				;; ����� ������ ������ ����������
	DD LinkCmd_MainStuct			;; ����� ���������� �������� ������
	DD LinkChangGr_MainStuct		;; ����� ���������� �������� ��������� � ������� ��	
	DB "&NameStn",0					;; �������� �������
	DB   16 dup(0)					;; ������

LinkComunObj =  0
LinkObj 	 =  0
LinkCmd 	 =  0
LinkChangGr	 =  0
        ENDM
;;**********************************************************
EndStnLc   MACRO
	DB 4 dup(0FFh)
Cseg	ENDS
	KolObjStn_MainStuct  	= KolObjStn
	KolCmd_MainStuct 		= KolCmd
	LinkObj_MainStuct 		= LinkObj
	LinkCmd_MainStuct 		= LinkCmd
	LinkChangGr_MainStuct 	= LinkChangGr

end start
ENDM
