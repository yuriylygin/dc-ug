??Sym0   =   0         ;; ���  .
??Sym46  =   0         ;; ���  .
??Sym49  =   1         ;; ���  1
??Sym50  =   2         ;; ���  2
??Sym51  =   3         ;; ���  3
??Sym52  =   4         ;; ���  4
??Sym53  =   5         ;; ���  5
??Sym54  =   6         ;; ���  6
??Sym55  =   7         ;; ���  7
??Sym56  =   8         ;; ���  8
??Sym57  =   9         ;; ���  9
??Sym48  =  10         ;; ���  0
??Sym65  =  10         ;; ���  0

??Sym192 =  11         ;; ���  �
??Sym193 =  12         ;; ���  �
??Sym194 =  13         ;; ���  �
??Sym195 =  14         ;; ���  �
??Sym196 =  15         ;; ���  �
??Sym197 =  16         ;; ���  �
??Sym198 =  17         ;; ���  �
??Sym199 =  18         ;; ���  �
??Sym200 =  19         ;; ���  �
??Sym202 =  20         ;; ���  �
??Sym203 =  21         ;; ���  �
??Sym204 =  22         ;; ���  �
??Sym205 =  23         ;; ���  �
??Sym206 =  24         ;; ���  �
??Sym207 =  25         ;; ���  �

??Sym208 =  26         ;; ���  �
??Sym209 =  27         ;; ���  �
??Sym210 =  28         ;; ���  �
??Sym211 =  29         ;; ���  �
??Sym212 =  30         ;; ���  �
??Sym213 =  31         ;; ���  �
??Sym214 =  32         ;; ���  �
??Sym215 =  33         ;; ���  �
??Sym216 =  34         ;; ���  �

??Sym221 =  35         ;; ���  �
??Sym222 =  36         ;; ���  �
??Sym223 =  37         ;; ���  �
;;----------------------------------------------
??Sym224 =  11         ;; ���  �
??Sym225 =  12         ;; ���  �
??Sym226 =  13         ;; ���  �
??Sym227 =  14         ;; ���  �
??Sym228 =  15         ;; ���  �
??Sym229 =  16         ;; ���  �
??Sym230 =  17         ;; ���  �
??Sym231 =  18         ;; ���  �
??Sym232 =  19         ;; ���  �
??Sym234 =  20         ;; ���  �
??Sym235 =  21         ;; ���  �
??Sym236 =  22         ;; ���  �
??Sym237 =  23         ;; ���  �
??Sym238 =  24         ;; ���  �
??Sym239 =  25         ;; ���  �

??Sym240 =  26         ;; ���  �
??Sym241 =  27         ;; ���  �
??Sym242 =  28         ;; ���  �
??Sym243 =  29         ;; ���  �
??Sym244 =  30         ;; ���  �
??Sym245 =  31         ;; ���  �
??Sym246 =  32         ;; ���  �
??Sym247 =  33         ;; ���  �
??Sym248 =  34         ;; ���  �

??Sym253 =  35         ;; ���  �
??Sym254 =  36         ;; ���  �
??Sym255 =  37         ;; ���  �

??Sym45  =  38         ;; ���  -
??Sym47  =  39         ;; ���  /
;;**********************************************************
?CLSNU  =     0000H
?CLSUP  =     0100H
?CLSKS  =     0200H
?CLSKP  =     0300H
?CLSST  =     0400H
?CLSSP  =     0500H
?CLSPG  =     0600H
?CLSDP  =     0700H  ;; ��������� ��������������� ��������
?CLSPR  =     0800H
?CLSDS  =     0900H  ;; ����� ����
?CLSUS  =     0A00H  ;; ����� �����
?CLSLK  =     0B00H  ;; ����� ���������
?CLSPGB =    01100H  ;; ����� ���������� ����
?CLSTM  =    01200H  ;; ����� ������
?CLSSTN =    01300H  ;; ����� �������
?CLSSO  =    0FF00H  ;; ����� ������� ��������

???NDT  =     000H
???NDN  =     001H

Tmk     = 1300h  ;; ������������ ���������� ��������� �������
Tpk     = 1100h  ;; ������������ ���������  ��������� �������
;;Nu      = 0600h  ;;
Tak     = 1100h  ;; ������������ ��������� ��������� �������
Tps     = 1000h  ;; ������������ ���������� ��������� �������
;;Ts      = 0F00h  ;; ������ ������� ��������� �������
Null    = 4000h   ;; 010 000 x - ������ �������
Min     = 8000h;;���� �����
;;------------------------------------------------------------------------------
;;      ������� ��/��      TYPE TS
                      ;; 000 000 x - ��������-1/�����-0
Nd      = 0200h   ;; 000 001 x - ����������-0/������������-1 �����������
                      ;; 000 010 x - ������ �������-1
                      ;; 000 011 x -
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - ������ ������� ��������� �������
                      ;; ��� �������
Uw      = 0000h   ;; �������� ����������� ��/��
Ur      = 0100h   ;; �������� ��������� ��/��
;;------------------------------------------------------------------------------
;;      ��������           TYPE TS
                      ;; 000 000 x - ��������-0/��������-1 ���������
Ro      = 0200h   ;; 000 001 x - �������� ������� �����������-0 ���� (�������)
Ad      = 0400h   ;; 000 010 x - ���������-1/������-0 ������������
Ps      = 0600h   ;; 000 011 x - 1-�������� ���������������� �������
Ms      = 0800h   ;; 000 100 x - ��������-1/��������-0 ���������� �������
                      ;; 000 101 x - 1-�������� �������� ��������� (������� �����)
                      ;; 000 110 x - 1-�������� �������� ��������� (������� �����)
                      ;; 000 111 x - ������ ��������� ���������
Go      = 1000h   ;; 001 000 x - �������� ������� �����������-0 ���� (�������/������)
Po      = 1200h   ;; 001 001 x - �������� ������� �����������-0 ���� (���������������)
Av      = 1400h   ;; 001 010 x - ������������� ���������
Avm     = 0015h   ;; 001 010 x - ������������� ��������� (�������)
SvBlk   = 1600h   ;; 001 011 x - ���������-1/������-0 ���������� ���������
Fd      = 1A00h   ;; 001 101 x - ���������-1/������-0 �������� �������              
                      ;; ��� �������
RoM     = 0082h   ;; ������� ������� ����� ��������� (����������� ���� �������� ����)
PsM		= 0006h   ;; ������� ������� ����� ��������� (�������� ���������������� �������)
Lg      = 0A00h   ;; �������� �������� ��������� (������� �����)
Lr      = 0C00h   ;; �������� �������� ��������� (������� �����)

;;              ���� ����������
Svt     =     000h       ;; �������� ������
Svn     =     001h       ;; �������� ��������
Svtm    =     002h       ;; �������� ������ ����������
Svnm    =     003h       ;; �������� �������� ����������
Svtp    =     020h       ;; �������� ������ ����������
Svnp    =     021h       ;; �������� �������� ����������
;;------------------------------------------------------------------------------
;;      ����               TYPE TS
                      ;; 000 000 x - ���� �����-0/��������-1
Zp      = 0200h   ;; 000 001 x - ���������-1 ����
Zpt     = 0200h   ;; 000 001 x - ���������-1 ���� � ������ �����������
Zpn     = 0400h   ;; 000 010 x - ���������-1 ���� � �������� �����������
Log     = 0C00h   ;; ���������� ��������
                      ;; 000 011 x - ������ ����-1
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - ������ ������� ��������� ����
                      ;; ��� �������
Pw      = 0200h   ;; �������� ����������� ���� (����� �����)
Pk1     = 0100h   ;; �������� ��������� ����
Pk2     = 0B00h   ;; �������� ��������� ����
;;Kn      = 0C00h   ;; �������� ���������� ����������� ���� �� ������� ����
;;-------------------------------------------------------------------------------
;;       �������           TYPE TS
Pk      = 0000h   ;; 000 000 x - ������� ������� � + (1)
Mk      = 0200h   ;; 000 001 x - ������� ������� � - (1)
Mu      = 0400h   ;; 000 010 � - ������� ����������-1
Sts     = 0600h   ;; 000 011 � - ����� �������-1
PkMk    = 0800h   ;; 000 100 � - ������� ������� � +/- (1/0)
Os      = 0A00h   ;; 000 101 x - ���������� �������-1
Sa      = 0C00h   ;; 000 110 x - ��������������� ������� ������� (1)
                      ;; 000 111 x - ������� ��������� �������
SaPk    = 1000h   ;; 001 000 x - ��������������� ������� ������� � +
SaMk    = 1200h   ;; 001 001 x - ��������������� ������� ������� � -
AVb     = 1400h   ;; 001 010 x - �������� ����� ������������ ������� (����� �����) 1-��������(��������) ���������
AVk     = 1618h   ;; 001 011 x - �������� ����� ������������ ������� (������� �����) 1-������ �������/���-�����������
AVkM    = 1800h   ;; 001 100 x - 1-������� ������� ������ ������������
AVbk    = 1A18h   ;; 001 101 x - �������� ����� ������������ ������� (�����/������� �����) 0-���.�����/1-������ �������
AVkb    = 1600h   ;; 001 101 x - �������� ����� ������������ ������� (�����/������� �����) 0-���.�����/1-������ �������
;;------------------------------------------------------------------------------
;;  ���������� ������      TYPE TS
                      ;; 000 000 x - ������ ��������-1/������-0
Zs      = 0200h   ;; 000 001 x - �������� ���������-1 ������
Zt      = 0200h   ;; 000 001 x - ���������-1 � ������ ��������
Zn      = 0400h   ;; 000 010 x - ���������-1 � �������� ��������
                      ;; 000 011 x - ��������� ��������� �������, �������� � ������
                      ;; 000 100 x - ����������� ���������-1 � ��������
Ir      = 0A00h   ;; 000 101 x - ������������� �������� ������
Log     = 0C00h   ;; ���������� ��������
                      ;; 000 110 x -
                      ;; 000 111 x - ������ ��������� ������
                      ;; ��� �������
IrM     = 000Ah   ;; ������� ������ (������������� ��������)
Sw      = 0200h   ;; �������� ����������� ���������� ������ (����� �����)
Sr      = 0100h   ;; �������� ��������� ���������� ������ (������� �����)
;;Kn      = 0C00h   ;; �������� ���������� ����������� ���� �� ������� ����
;;------------------------------------------------------------------------------
;;      ��������           TYPE TS
                      ;; 000 000 x - ��������-1/�����-0
Rvr     = 0200h   ;; 000 001 x - ����������(�����)-0/������������(�����������)-1 ����������� ��������
PgLg    = 0414h   ;; 000 010 x - 1-����������� (������� �����)
PgLy    = 0616h   ;; 000 011 x - 1-����� (������ �����)
PgLw    = 0818h   ;; 000 100 x - 1-�������� (����� �����)
PgLr    = 0A1Ah   ;; 000 101 x - 1-����� (������� �����)
                      ;; 000 110 x - 
                      ;; 000 111 x - ������ ������� ��������� ��������

PgLgM   = 0014h   ;; 001 010 x - 1-������� ������� ����� (������ ��� ������ ��� ��������� �������� ����� �����������)
PgLyM   = 0016h   ;; 001 011 x - 1-������� ������ ����� (������ ��� ������ ��� ��������� �������� ����� �����������)
PgLwM   = 0018h   ;; 001 100 x - 1-������� ����� ����� (�������� ������� ��� ������������ ��������)
PgLrM   = 001Ah   ;; 001 101 x - 1-������� ������� ����� (�� ������� ������, ���� �� ������� ����������� ������ ��������,
                      ;;               ��������� ���������, ����� ����� ������ �� ��������)

;;------------------------------------------------------------------------------
;;      �����������        TYPE TS
                      ;; 000 000 x - 0 / 1 - 1/2 ���������
Sost3   = 0200h   ;; 000 001 x - 1 - 3 ���������
Sost3M  = 0002h
Sost4   = 0400h   ;; 000 010 x - 1 - 4 ���������
Sost4M  = 0004h   ;;
                      ;; 000 011 x -
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
Net =     1F00h   ;; 000 111 x - ������ ������� ��������� �������
;;------------------------------------------------------------------------------
;;      ��������           TYPE TS
                      ;; 000 000 x - ������-0/������-1
PrZakrM = 0001h   ;; 
PrAlrm  = 0200h   ;; 000 001 x - 1-������ ��������
PrAlrmM = 0002h   ;;
;;PrOgr   = 0400h   ;; 000 010 x - 1-���������� ��������
PrIzv   = 0600h   ;; 000 011 x - 1-�������� ��������� �� �������
PrIzvM  = 0006h   ;;
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - ������ ������� ��������� ��������
;;------------------------------------------------------------------------------
;;      �����              TYPE TS
                      ;; 000 000 x - 
DsAlrm  = 0200h   ;; 000 001 x - 
DsOgr   = 0400h   ;; 000 010 x - 
DsIzv   = 0600h   ;; 000 011 x - 
                      ;; 000 111 x - ������ ������� ��������� �����

Ponab     = 1
DiskB     = 2
DiskB2000 = 3

;;------------------------------------------------------------------------------
;;      �����              TYPE TS
                      ;; 000 000 x - 
Dat1    = 0200h   ;; 000 001 x - 
Dat2    = 0400h   ;; 000 010 x - 
USotkl  = 0600h   ;; 000 011 x - 
                      ;; 000 111 x - ������ ������� ��������� �����

Ponab     = 1
DiskB     = 2
DiskB2000 = 3
Esso      = 4

;;-------------------------------------------------------------------------------
;;         �����         TYPE TS
Dat1    = 0000h   ;; 000 000 x - ������� ������� � + (1)
Dat2    = 0200h   ;; 000 001 x - ������� ������� � - (1)
Rb      = 0400h   ;; 000 010 � - ������� ����������-1
Potk    = 0600h   ;; 000 011 � - ����� �������-1
Otk     = 0800h   ;; 000 100 � - ������� ������� � +/- (1/0)
                      ;; 000 101 x - ���������� �������-1
                      ;; 000 110 x - ��������������� ������� ������� (1)
                      ;; 000 111 x - ������� ��������� �������
                      ;; 001 000 x - ��������������� ������� ������� � +
                      ;; 001 001 x - ��������������� ������� ������� � -
                      ;; 001 010 x - �������� ����� ������������ ������� (����� �����) 1-��������(��������) ���������
                      ;; 001 011 x - �������� ����� ������������ ������� (������� �����) 1-������ �������/���-�����������
                      ;; 001 100 x - 1-������� ������� ������ ������������
                      ;; 001 101 x - �������� ����� ������������ ������� (�����/������� �����) 0-���.�����/1-������ �������
                      ;; 001 101 x - �������� ����� ������������ ������� (�����/������� �����) 0-���.�����/1-������ �������
;;     ��� �����
Ust     = 1	
Ust2    = 2
Ust3    = 3
Usn     = 4
Usn2    = 8
Usn3    = 12
;;------------------------------------------------------------------------------
;;		  ����� �������� 
;; 		  ����-�
ABTC  = 2000h     ;; 010 000 x - ������� ������� ����-�
;;------------------------------------------------------------------------------
ValKodS  Macro  KodSym
	IfDef	??Sym&KodSym
		????ks    =    (??Sym&KodSym + 0)
	Else
		Dw	??Sym&KodSym
	EndIf
EndM
;-------------------------------------------
kodname  MACRO   StrName
TekSym  =     0
	ForC   ??c,<StrName>
    	IF      (TekSym MOD 3) EQ 0
             Kod =   0
        ENDIF
        ValKodS  %('&??c'+0)
        Kod     =     Kod*40+????ks
        TekSym  =     TekSym+1
		IF         (TekSym MOD 3) EQ 0
              DW  Kod
        ENDIF
    ENDM
		
IF    @SizeStr('&StrName') NE 8
	.ERR   <�������� ����� �������� � ���� ������� >
ENDIF

 ENDM
;;**********************************************************
Off32  MACRO   List
	FOR     ??x,<List>
		??KolList = ??KolList +1
		
		??FlagM = 0
		??FlagP = 0
		??NsymM = 0
		??NsymP = 0
		IfIdn	<&??x>,<?>
			Dd	0;;������ 
			Dw	0;;���������
		Else
			;;�������� ����� ������� �������� '+' � '-' � �������������� ��� '+' � '-'
			??Flag  = @CatStr(!", @SubStr(??x, 1, 1), !")
			If	??Flag EQ "-"
				??FlagM = 8000h
				??NsymM = 1
			Else
				??FlagM = 0
				??NsymM = 0
			EndIf
			
			Forc ??c,<??x>
				if ??FlagP EQ 0;;���� �� ������ +
					??NsymP = ??NsymP + 1
				EndIf
				If	(('&??c' EQ '+') Or (??FlagP EQ 1))
					??FlagP = 1
				Else
					??FlagP = 0
				EndIf
			EndM
			
			if	??FlagP	EQ 0 And ??FlagM EQ 0
				Dd ??x
				Dw	0
			else
				if	??FlagP	EQ 1 And ??FlagM EQ 0
					Dd @SubStr(??x, 1, ??NsymP - 1)
					Dw	@SubStr(??x, ??NsymP + 1, @SizeStr(??x) - ??NsymP)
				else
					if	??FlagP	EQ 0 And ??FlagM EQ 8000h
						Dd @SubStr(??x, 1 + 1, @SizeStr(??x) - 1)
						Dw	??FlagM
					else
						if	??FlagP	EQ 1 And ??FlagM EQ 8000h
							Dd @SubStr(??x, 1 + 1, ??NsymP - 2)
							Dw	@SubStr(??x, ??NsymP + 1, @SizeStr(??x) - ??NsymP) + ??FlagM
						EndIf
					EndIf
				EndIf
			EndIf
		
		EndIf
	EndM
ENDM
;;**********************************************************
Off24  MACRO   List
	FOR     ??x,<List>
		??KolList = ??KolList +1
		
		??FlagM = 0
		??FlagP = 0
		??NsymM = 0
		??NsymP = 0
		IfIdn	<&??x>,<?>
			Dd	0;;������ 
			Db	0;;���������
		Else
			;;�������� ����� ������� �������� '+' � '-' � �������������� ��� '+' � '-'
			??Flag  = @CatStr(!", @SubStr(??x, 1, 1), !")
			If	??Flag EQ "-"
				??FlagM = 8000h
				??NsymM = 1
			Else
				??FlagM = 0
				??NsymM = 0
			EndIf
			
			Forc ??c,<??x>
				if ??FlagP EQ 0;;���� �� ������ +
					??NsymP = ??NsymP + 1
				EndIf
				If	(('&??c' EQ '+') Or (??FlagP EQ 1))
					??FlagP = 1
				Else
					??FlagP = 0
				EndIf
			EndM
			
			if	??FlagP	EQ 0 And ??FlagM EQ 0
				Dd ??x
				Db	0
			else
				if	??FlagP	EQ 1 And ??FlagM EQ 0
					Dd @SubStr(??x, 1, ??NsymP - 1)
					Db	(@SubStr(??x, ??NsymP + 1, @SizeStr(??x) - ??NsymP) Shr 8)  And 0FFh
				else
					if	??FlagP	EQ 0 And ??FlagM EQ 8000h
						Dd @SubStr(??x, 1 + 1, @SizeStr(??x) - 1)
						Db	(??FlagM Shr 8)  And 0FFh
					else
						if	??FlagP	EQ 1 And ??FlagM EQ 8000h
							Dd @SubStr(??x, 1 + 1, ??NsymP - 2)
							Db	((@SubStr(??x, ??NsymP + 1, @SizeStr(??x) - ??NsymP) + ??FlagM) Shr 8)  And 0FFh
						EndIf
					EndIf
				EndIf
			EndIf
		
		EndIf
	EndM

EndM
;;**********************************************************
Off16	MACRO   Lst
	For		??x,<Lst>
		??KolList	=	??KolList + 1
		IfIdn	<??x>,<?>
			DD	0
		Else
			DD	??x;; - BegCseg
		EndIf
	EndM
ENDM
;;**********************************************************
Off   MACRO   Lst
	For		??x,<Lst>
		??KolList	=	??KolList + 1
		IfIdn	<??x>,<?>
			DD	0
		Else
			DD	??x;; - BegCseg
		EndIf
	EndM
ENDM
;;**********************************************************
Nam		MACRO   ListPar
        DW      ??Cls
        DW      0               ;; ��������� �������
        DW      0               ;; ���������� ��������� �������
__Kobj    =     __Kobj+1
        KodName <ListPar>
        DD      0               ;; ����� ���������� ��������� ��������� �������
		DD      0               ;; ��������� �� ���������������� ����������
		ENDM
;;**********************************************************	
DclLk	MACRO	Nm,LstObj,Stn
        Nam     <Nm>
??KolList =      0
		
        Off16   <LstObj>
        If      ??KolList NE 1
			.Err	<����� ���������� � ������ �� ����� 1>
        EndIf
		
??KolList = 0	
		For		??x,<Stn>
		??KolList	=	??KolList + 1
		If	??KolList eq 1
			DB ??x,0	
		Else
			EcpStn ??x
		EndIf
		EndM
		If      ??KolList NE 2
			.Err	<����� ���������� � ������ �� ����� 2>
        EndIf
		ENDM
;;**********************************************************
DclUp	MACRO   Nm,LstUp
        Nam     <Nm>
??KolList =      0
        Off16   <LstUp>
        If      ??KolList NE 2
			.Err	<����� ���������� � ������ �� ����� 2>
        EndIf
ENDM
;;**********************************************************
DclKs   MACRO   Nm,Tsvt,LstKs,chg_Ndv
        Local   LabKs,LabKs2
LabKs:
        Nam     <Nm>
??KolList =      0
        Off16   <LstKs>
        If      ??KolList NE 2
                .ERR   <����� ���������� � ������ �� ����� 2 >
        EndIf

??chgndv =       0
        IFNB <chg_Ndv>
        ??chgndv = 0080h        
        ENDIF
LabKs2:
        Org     LabKs
        DW      (??Cls+Tsvt) OR ??chgndv 	;; ��� ��������� � ������� ����� ��������
        Org     LabKs2
ENDM
;;**********************************************************
DclKp   MACRO   Nm,LstKp
        Nam     <Nm>
??KolList =      0
        Off16   <LstKp>
        If      ??KolList NE 2
                .ERR   <����� ���������� � ������ �� ����� 2 >
        EndIf
EndM
;;**********************************************************
DclBs	MACRO	Nm,LstSp
		Local	LabSp,LabSp2
LabSp:
		Nam		<Nm>
??KolList =		0
		IFNB	<LstSp>
			Off16	<LstSp>
			??SizeListSp = 1 SHL ??KolList
LabSp2:
			Org		LabSp
			Dw		??Cls+??KolList
			Org		LabSp2
		ELSE
			??SizeListSp = 1
		ENDif
EndM
;;**********************************************************
DclSt   MACRO   Nm,LstSt
        Local   LabSt,LabSt2
LabSt:
        Nam     <Nm>
??KolList =      0
        Off16  <LstSt>
LabSt2:
        Org     LabSt
        Dw      ??Cls+??KolList 	;; ���������� ������
        Org     LabSt2
EndM
;;**********************************************************
Link_T  Macro   List
??KolList =      0
        Off16   <List>
        IF      ??KolList NE ??SizeListSp
                .ERR   <�� ������ ����� ���������� � ������ >
        ENDIF
ENDM
;;**********************************************************
Link_N  Macro   List
??KolList =      0
        Off16   <List>
        If      ??KolList NE ??SizeListSp
                .ERR   <�� ������ ����� ���������� � ������ >
        EndIf
ENDM
;;**********************************************************
DclSp   MACRO   Nm,LstSp
        Local   LabSp,LabSp2
LabSp:
        Nam     <Nm>
??KolList =      0
        IFNB    <LstSp>
           Off16   <LstSp>
           ??SizeListSp = 1 SHL ??KolList
LabSp2:
           Org     LabSp
           Dw      ??Cls+??KolList 		;; ���������� �������
           Org     LabSp2
        ELSE
           ??SizeListSp = 1
        ENDIF
EndM
;;**********************************************************
DclPg   MACRO   Nm,LstUp
        Local   LabPg,LabPg2
LabPg:
        Nam     <Nm>
??KolList =      0
        IFNB    <LstUp>
           Off16   <LstUp>
LabPg2:
           Org     LabPg
           Dw      ??Cls+??KolList 		;; ���������� ���������� �����
           Org     LabPg2
        ENDIF
EndM
;;**********************************************************
DclDp   MACRO   DpName,Msg0,Msg1
        Local   LabDp,LabDp2
LabDp:
        Nam     <DpName>
??Kmsg  =       0
        IFNB    <Msg0>
                DP_MSG1C 1,Msg0
        ENDIF
        IFNB    <Msg1>
                DP_MSG1C 2,Msg1
        ENDIF
LabDp2:
        Org     LabDp
        DW      ??Cls+??Kmsg  		;; ���������� ��������� ���������
        Org     LabDp2
EndM
;;*********************************************************************
DP_MSG1C MACRO  Kadd,Mel,Cf,Txt
        If      @SizeStr(Txt) NE 15
                .ERR   <����� �������� � ������ �� ����� 13 >
        Else
         Db     Mel,Cf,Txt
         Db     0
??Kmsg  = ??Kmsg  + Kadd
         EndIf
EndM
;;**********************************************************
DclPr   MACRO   Nm
        Nam     <Nm>
EndM
;;**********************************************************
DclUs   MACRO   UsName,Tus
        Local   LabUs,LabUs2
LabUs:
        Nam     <UsName>

LabUs2:
        Org     LabUs
        DW      ??Cls+Tus  		;; ��� �����
        Org     LabUs2
EndM
;;**********************************************************
BegDisk MACRO   NameStn
                PUBLIC  DclDisk&NameStn
DclDisk&NameStn LABEL   BYTE

        CLS  Ds

        ENDM
;;**********************************************************
EndDisk MACRO   NameStn
        ENDM
;;**********************************************************
DclDs   MACRO   Nm,Num,Type,Ord,LstObj
        Local   LabDs,LabDs2
LabDs:
        Nam     <Nm>

        DB      Num			;; ����� ����� �� �������
        DB      Type		;; ��� �����
        DD      Ord			;; �������� ��������� �� ��������
        DD      0			;; ������ ������ ���������� � ����������� �������
		
??KolList =     0
       	Off32   <LstObj>
        IF      ??KolList NE 4
                .ERR   <����� ���������� � ������ �� ����� 4 >
        ENDIF
LabDs2:
        Org     LabDs
        DW      ??Cls+??KolList 		;; ���������� �������� � ������ - ������ ���� = 4
        Org     LabDs2

        DB      16 DUP(0)	;; ������

__KolDisk = __KolDisk + 1

        ENDM
;;**********************************************************
Mwork   MACRO   LstWrk
		Local   LabWrk,LabWrk2
        DB      'W'
LabWrk:
        DB      0                        ;; ���������� �������� � ������
        IFNB    <LstWrk>
??KolList =     0
        	Off24   <LstWrk>
LabWrk2:
	        Org    LabWrk
    	      DB     ??KolList              ;; ���������� �������� � ������
        	Org    LabWrk2
        ENDIF
EndM
;;*********************************************************************
Mcond   MACRO   LstCond
                Local   LabCond,LabCond2
        DB      'C'
LabCond:
        DB      0                        ;; ���������� �������� � ������
        IFNB    <LstCond>
??KolList =     0
           Off24   <LstCond>
LabCond2:
           Org    LabCond
           DB     ??KolList              ;; ���������� �������� � ������
           Org    LabCond2
        ENDIF
EndM
;;**********************************************************
So_Or   Macro   Nm,LstOr,LstWrk
        Local   LabOr,LabOr2
LabOr:
        Nam     <Nm>
        Mcond   <LstOr>          ;; ������ �������
LabOr2:
        Org     LabOr
        DW      ??Cls+02h
        Org     LabOr2
        Mwork   <LstWrk>         ;; ������ �����
EndM
;;***********************************************************
So_And  Macro   Nm,LstAnd,LstWrk
        Local   LabAnd,LabAnd2
LabAnd:
        Nam     <Nm>
        Mcond   <LstAnd>         ;; ������ �������
LabAnd2:
        Org     LabAnd
        Dw      ??Cls+03h
        Org     LabAnd2
        Mwork   <LstWrk>         ;; ������ �����
EndM
;;***********************************************************
So_Fun  Macro  Nm,LstFunSo,LstWork
        Local  LabSo,LabSo2
LabSo:
        Nam     <Nm>
        Mcond   <LstFunSo>       ;; ������ �������
LabSo2:
        Org     LabSo
        Dw      ??Cls+01h
        Org     LabSo2
        Mwork   <LstWork>        ;; ������ �����
EndM
;;***********************************************************
So_Rept Macro  Nm,LstWork
        Local   LabRp,LabRp2
LabRp:
		Nam     <Nm>
        Mcond   <>       ;; ������ �������
LabRp2:
        Org     LabRp
        Dw      ??Cls+01h
        Org     LabRp2
        Mwork   <LstWork>
EndM
;;**********************************************************
Cls     MACRO   Ncl
??Cls    =      ?CLS&Ncl
        ENDM
;;**********************************************************
BegGr   MACRO   NameTs
__Ngr	    =   0
??Nstb   =      0
??Nstr   =      0
		Db		'&NameTs',0
		DD		LinkDclTS		;����� ��������� ����
		Dw		KolGrRKP&NameTs
                PUBLIC  DclTs&NameTs
DclTs&NameTs      LABEL   BYTE
LinkDclTS	=	DclTs&NameTs; - BegCseg
        ENDM
;;**********************************************************
Stb     MACRO   NumStb
??Nstb   =      NumStb          ;; -1  ��� ���
??Nstr   =      0
EndM
;;**********************************************************
Gr      MACRO   ListSignal
        DB      ??Nstb*3+??Nstr ;; 3 - ��� ���, 4 - ��� ���
        DW      0               ;; ��������� ������
??Nstr   =      ??Nstr+1
__Ngr    =      __Ngr+1
??KolList=      0
        Off32   <ListSignal>
        IF   ??KolList NE 8
                .ERR   <����� ���������� � ������ �� ����� 16>
        ENDIF
EndM
;;**********************************************************
EndGr   MACRO   NameTs
KolGrRKP&NameTs  =  __Ngr
        ENDM
;;**********************************************************
BegTS   MACRO   NameStn

Cseg	ENDS
DclTSCseg	Segment
		ASSUME  CS:DclTSCseg
		
__Nblk	 =      0
		Db		'&NameStn',0
		DD		LinkDclBlkTS	;����� ���� �������� ����� ��
		Dw		KolBlkTS&NameStn
                PUBLIC  DclBlkTs&NameStn
DclBlkTs&NameStn  LABEL   BYTE
LinkDclBlkTS	=	DclBlkTs&NameStn; - BegCseg

        ENDM
;;**********************************************************
BlkTs   MACRO   NumBlk, Place
        DB      NumBlk
        DB  Place,0
		DW 3 DUP(0)	;;6 ���� ��� ��������� ������(��� �������� CRC)

__Nblk = __Nblk + 1
__KolBlkTS = __KolBlkTS + 1
EndM
;;**********************************************************
GrpTs   MACRO   ListOut

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			IFIDN	<&??x>,<?>
				DB	"          ",0
			ELSE
                DB  &??x&,0
			ENDIF
		EndM

        IF   ??KolList NE 5
    	    DW  HET??5??SYM
        ENDIF

EndM
;;**********************************************************
EndTS   MACRO   NameStn
KolBlkTS&NameStn = __Nblk

DclTSCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg
		
        ENDM
;;**********************************************************
BegTU   MACRO   NameStn

Cseg	ENDS
DclTSCseg	Segment
		ASSUME  CS:DclTSCseg
		
                PUBLIC  DclTu&NameStn
DclTu&NameStn   LABEL   BYTE

        ENDM
;;**********************************************************
DclTu   MACRO   NumBlk, Place, ListOut
        DB      NumBlk
        DB  Place,0
        DB      0               ;; ��������� ������� �����

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			IFIDN	<&??x>,<?>
				DB	"        ",0
			ELSE
                DB  &??x&,0
			ENDIF
		EndM

        IF   ??KolList NE 8
    	    DW  HET??8??SYM
        ENDIF

        DB      16 DUP(0)	;; ������

__KolBlkTU = __KolBlkTU + 1

EndM
;;**********************************************************
EndTU   MACRO   NameStn


DclTSCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg
        ENDM
;;**********************************************************
BegOTU  MACRO   NameStn

Cseg	ENDS
DclTSCseg	Segment
		ASSUME  CS:DclTSCseg
		
                PUBLIC  DclOtu&NameStn
DclOtu&NameStn   LABEL   BYTE

        ENDM
;;**********************************************************
DclOtu  MACRO   NumBlk, Place, ListOut
        DB      NumBlk
        DB  Place,0
        DB      0               ;; ��������� ������� �����

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			IFIDN	<&??x>,<?>
				DB	"        ",0
			ELSE
                DB  &??x&,0
			ENDIF
		EndM

        IF   ??KolList NE 8
    	    DW  HET??8??SYM
        ENDIF

        DB      16 DUP(0)	;; ������

__KolBlkOTU = __KolBlkOTU + 1

EndM
;;**********************************************************
EndOTU  MACRO   NameStn


DclTSCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg
        ENDM
;;**********************************************************
BegTI   MACRO   NameStn
                PUBLIC  DclTi&NameStn
DclTi&NameStn   LABEL   BYTE

        ENDM
;;**********************************************************
DclTi   MACRO   NumBlk, Place, ListOut
        DB      NumBlk			;; ����� �����
        DB  &Place,0

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			DW  0				;; �������� �������
			IFIDN	<&??x>,<?>
				DB	"        ",0
			ELSE
                DB  &??x&,0	;; �������� �������
			ENDIF
		EndM

        IF   ??KolList NE 12
    	    DW  HET??12??SYM
        ENDIF

        DB      16 DUP(0)	;; ������

__KolBlkTI = __KolBlkTI + 1

EndM
;;**********************************************************
EndTI   MACRO   NameStn
        ENDM
;;**********************************************************
BegMatrOTU   MACRO   NameStn
Cseg	ENDS
DclTSCseg	Segment
		ASSUME  CS:DclTSCseg
		
		Dw		KolLineMatrOTU
		Dw		KolCmdMatrOTU
                PUBLIC  DclMatrOtu&NameStn
DclMatrOtu&NameStn   LABEL   BYTE
        ENDM
;;**********************************************************
LineOTU   MACRO   NumLine, NameLine, AdrBlkOTU, LineCodeOTU
		DB NumLine
        DB NameLine,0
		DD AdrBlkOTU
		DB 0&LineCodeOTU&B

__KolLineMatrOTU = __KolLineMatrOTU + 1

        ENDM
;;**********************************************************
CmdOTU   MACRO   NameCmdOTU, ListOut
        DB NameCmdOTU,0

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			DD  ??x
		EndM

        IF   ??KolList NE 2
    	    DW  HET??2??SYM
        ENDIF

__KolCmdMatrOTU = __KolCmdMatrOTU + 1

        ENDM
;;**********************************************************
EndMatrOtu   MACRO   NameStn


DclTSCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg
        ENDM
;;**********************************************************
;;**********************************************************
BegStn  MACRO   NameStn,ECPCodeStn

OPTION MZ :20h ;;����� ������ ������� ��������
STACK segment para STACK 'STACK'
STACK ends

Cseg    Segment PUBLIC  byte 'CODE'
        ASSUME  CS:Cseg
Cseg	ENDS	

DclTSCseg	Segment PUBLIC  Byte 'DclTSCseg'
		ASSUME  CS:DclTSCseg
DclTSCseg	ENDS


Cseg	Segment
        ASSUME  CS:Cseg
start:
        PUBLIC  Rom&NameStn

__Kobj      =	0
__KolBlkTU  =   0
__KolBlkOTU =   0
__KolBlkTI  =   0
__KolDisk   =   0
__KolCmd    =	0
__KolBlkTS  =   0
__KolCmdOt	=	0
__KolCmdRkpTU =	0
;;__Ngr	    =   0
LinkDclTS	=	0
LinkDclBlkTS =	0
__KolLineMatrOTU =	0
__KolCmdMatrOTU  =	0
__KolBlkPI = 0

;BegCseg:

;  IFB ECPCodeStn
;	.Err	<�� ������ EPC �������>
;  ENDIF
  


Rom&NameStn:
  Db   'Dcl&NameStn'         ;; ��� �������� �������
  EcpStn ECPCodeStn
  Dw   KolObjStn             ;; ����� �������� �������
  Dw   KolGrStn              ;; ����� ����� �������� �� � ��������� �������
  DD   DclTS                 ;; ����� ���������� ������ �� �������
  Dw   KolBlkTU              ;; ����� ������ ��
  DD   DclBlkTU              ;; ����� ���������� �������� ������ ��
  Dw   KolBlkOTU             ;; ����� ������ ���
  DD   DclBlkOTU             ;; ����� ���������� �������� ������ ���
  Dw   KolBlkTI              ;; ����� ������ ��
  DD   DclBlkTI              ;; ����� ���������� �������� ������ ��
  Dw   KolDisk               ;; ����� ������ �� �������
  DD   DclDisk               ;; ����� ���������� �������� ������
  Dw   KolCmd                ;; ����� ������ ������ ����������
  DD   DclCmd                ;; ����� ���������� �������� ������
  Dw   KolCmdOt              ;; ����� ������������� ������
  DD   DclCmdOt              ;; ����� ���������� �������� ���. ������
  Dw   KolBlkTS              ;; ����� ������ ��
  DD   DclBlkTS              ;; ����� ���������� �������� ������ ��
  DD   DclMatrOTU            ;; ����� ���������� �������� ������� ���
  Dw   KolCmdRkpTU           ;; ����� ������ ������ ����������, ���������� �� ��
  DD   DclCmdRkpTU           ;; ����� ���������� �������� ������, ���������� �� ��
  Dw   KolBlkPI
  DD   DclBlkPI_
  DD   0            		 ;; ����� ���������� �������
  DD   0		             ;; ����� ��������� �������
  DB   11 dup(0)              ;; ������

        ENDM
;;**********************************************************
EndStn  MACRO   NameStn
Cseg    ENDS
KolObjStn    =  __Kobj
KolGrStn     =  __Ngr
KolBlkTU     =  __KolBlkTU
KolBlkOTU    =  __KolBlkOTU
KolBlkTI     =  __KolBlkTI
KolDisk      =  __KolDisk
KolCmd       =  __KolCmd
KolCmdOt     =  __KolCmdOt
KolBlkTS     =  __KolBlkTS
KolCmdRkpTU  =  __KolCmdRkpTU
KolLineMatrOTU	=	__KolLineMatrOTU
KolCmdMatrOTU	=	__KolCmdMatrOTU
KolBlkPI    =  __KolBlkPI

;;DclTS        =  DclTs&NameStn - BegCseg
DclTS        =  LinkDclTS
DclBlkTS     =  LinkDclBlkTS

If  KolBlkTU EQ 0
    DclBlkTU  =  0
Else
    DclBlkTU  =  DclTu&NameStn; - BegCseg
EndIf

If  KolBlkOTU EQ 0
    DclBlkOTU  =  0
Else
    DclBlkOTU  =  DclOtu&NameStn; - BegCseg
EndIf

If  KolBlkTI EQ 0
    DclBlkTI  =  0
Else
    DclBlkTI  =  DclTi&NameStn; - BegCseg
EndIf

If  KolDisk EQ 0
    DclDisk  = 0
Else
    DclDisk  =  DclDisk&NameStn; - BegCseg
EndIf

If  KolCmd EQ 0
    DclCmd =  0
Else
    DclCmd  =  DclCmdTu&NameStn; - BegCseg
EndIf

If  KolCmdOt EQ 0
    DclCmdOt =  0
Else
    DclCmdOt =  DclCmdOt&NameStn; - BegCseg
EndIf

If  __KolLineMatrOTU EQ 0
    DclMatrOTU  =  0
Else
    DclMatrOTU  =  DclMatrOtu&NameStn; - BegCseg
EndIf

If  KolCmdRkpTU EQ 0
    DclCmdRkpTU =  0
Else
    DclCmdRkpTU  =  DclCmdRkpTu&NameStn; - BegCseg
EndIf

If  KolBlkPI EQ 0
    DclBlkPI_ =  0
Else
    DclBlkPI_  =  DclBlkPI&NameStn; - BegCseg
EndIf

end start
ENDM
;;**********************************************************
