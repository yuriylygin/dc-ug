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
??Par207 =   70H+80H   ;�o� ���.'�'
??Par239 =   70H+80H   ;�o� ���.'�'
??Par208 =   71H       ;�o� ���.'�'
??Par240 =   71H       ;�o� ���.'�'
??Par209 =  72h        ;; ��� �
??Par241 =  72h        ;; ��� �
??Par210 =  73h+80h    ;; ��� �
??Par242 =  73h+80h    ;; ��� �
??Par216 =   0F9H      ;�o� ���.'�'
??Par248 =   0F9H      ;�o� ���.'�'
??Par212 =   75H+80H   ;�o� ���.'�'
??Par244 =   75H+80H   ;�o� ���.'�'
??Par214 =   77H      ;�o� ���.'�'
??Par246 =   77H      ;�o� ���.'�'
??Par200 =  69h        ;; ��� �
??Par232 =  69h        ;; ��� �

;       ���� ������ ��  (�������� �� �������)
;-----------------------------------------------------
CMD_NP		EQU		07H		;�������� �����
CMD_RAB		EQU		0A1H	;������� ������� �������
CMD_PRW		EQU		0A2H	;������� ��������������� �������
CMD_OCHS	EQU		0A4H	;��������� ���(�������) �������
CMD_IZSotv	EQU		0A5H	;���=������������� ���������
CMD_OOCHS	EQU		0A8H	;���������� ��������(�������) �������
CMD_ZAP		EQU		0AEH	;������
CMD_OZAP	EQU		0AEH	;������
CMD_RAZ		EQU		0AFH	;����������
CMD_ORAZ	EQU		0AFH	;����������
CMD_OPRW	EQU		0B0H	;������ ��������� ������
CMD_IP		EQU		0BBH	;���=������������� ��������
CMD_DP		EQU		0BCH	;���� ��������
CMD_ONP		EQU		0BH		;������ ��������� ������
CMD_OPS		EQU		0C1H	;���=�������� �����-������ ���������
CMD_IZS		EQU		0C2H	;������������� ��������� ������
CMD_WSP		EQU		0C3H	;����������
CMD_ONM		EQU		0C3H	;���=������ ��������������������� �������
CMD_OZMS	EQU		0C4H	;������ ��������� ��������
CMD_OWSP	EQU		0C5H	;������ ������������� ���������� �������� �������������
CMD_SSO		EQU		0DDH	;���=����� ��������
CMD_NO		EQU		0DH		;�������� �����������
CMD_PRZD	EQU		0E0H	;���=�������� ��������
CMD_OPRZD	EQU		0E0H	;���=������ �������� ��������
CMD_SIG		EQU		0E1H	;���=���������� ������������� (����������, ��������)
CMD_OTK		EQU		0E1H	;���=���������� �������
CMD_KGN		EQU		0E2H	;������ ���
CMD_OKGN	EQU		0E2H	;������ ������ ���
CMD_TstOn	EQU		0E4H	;������������ ����
CMD_TstOff	EQU		0E6H	;������� ����
CMD_ONO		EQU		0EH		;������ ��������� �����������
CMD_DN		EQU		0FH		;�������� ����� "����"
CMD_NSK		EQU		13H		;�������� �������� �������
CMD_ONSK	EQU		15H		;������ ��������� ��������� ��������
CMD_NAD		EQU		16H		;������������ ��������
CMD_ODN		EQU		17H		;��������� ����� "����"
CMD_ONAD	EQU		19H		;������ ��������� ������������
CMD_TO		EQU		1AH		;������ �����������
CMD_PUT		EQU		1BH		;�������
CMD_OTO		EQU		1CH		;������ ������� �����������
CMD_OPUT	EQU		1DH		;������ ��������
CMD_IZP		EQU		1EH		;��������� �� �������
CMD_AD		EQU		21H		;������������
CMD_OAD		EQU		22H		;������ ������������
CMD_TP		EQU		23H		;������ �����
CMD_OTP		EQU		25H		;������ ������� ������
CMD_TSK		EQU		26H		;������ �������� �������
CMD_OIZP	EQU		27H		;������ ��������� �� �������
CMD_OTSK	EQU		29H		;������ ������� ��������� ��������
CMD_TAD		EQU		2AH		;������ ������������
CMD_OTAD	EQU		2CH		;������ ������� ������������
CMD_OTRV	EQU		2EH		;������ �������-1 ����
CMD_MNV		EQU		31H		;���������� �������
CMD_OMNV	EQU		32H		;������ ����������� ��������
CMD_MR		EQU		34H		;������� �������� �� ����� � ����
CMD_OMR		EQU		38H		;������ �������� ��������
CMD_PRS		EQU		43H		;�������������� ������� �������
CMD_PRSMR	EQU		44H		;���������� ������� �������
CMD_MUS		EQU		46H		;������� ����������
CMD_OMUS	EQU		49H		;������ �������� ����������
CMD_SU		EQU		4AH		;�������� ����������
CMD_OSU		EQU		4CH		;������ ��������� ����������
CMD_WA		EQU		51H		;����� �������������
CMD_ONB		EQU		52H		;������ ������
CMD_ZUU		EQU		66H		;��������� ������� ��������
CMD_OZUU	EQU		67H		;���������� ������� ��������
CMD_GS		EQU		68H		;��������������� �����
CMD_OPRG	EQU		6AH		;���������� ��������
CMD_AWT		EQU		6BH		;�������������� ������������� ����������� ����
CMD_OAWT	EQU		6CH		;������ ������������� ����������� ����
CMD_SG		EQU		70H		;�������� �������
CMD_RST		EQU		72H		;����������
CMD_ORSt	EQU		73H		;������ ����������
CMD_MM		EQU		74H		;��������� ����������� ������ ���������� �������� (��� ����)
CMD_OMM		EQU		75H		;���������� ����������� ������ ���������� �������� (��� ����)
CMD_WSA		EQU		77H		;���=��������������� ������� �������
CMD_BS		EQU		7AH		;��������� ������ �� - ������� �������� ��� �������
CMD_OBS		EQU		7BH		;���������� ������ �� (��� ���� � ����������)
CMD_OSG		EQU		83H		;�������� �������
CMD_WDSN	EQU		85H		;��������� ���
CMD_ODSN	EQU		86H		;������ ��������� ���
CMD_GRS		EQU		88H		;���=��������� ������ ��� ��� � ���
CMD_OGS		EQU		89H		;������ ��������������� �����
CMD_WT		EQU		8AH		;����� � ��������
CMD_SMN		EQU		8CH		;���=����� �����������
CMD_IR		EQU		91H		;���=������������� �������� ������
CMD_ORAB	EQU		92H		;������ �������
CMD_IPS		EQU		93H		;���=���������� �������� �������
CMD_OIPS	EQU		93H		;���=������ ���������� �������� �������
CMD_UKS		EQU		96H		;���=���������� �����
CMD_ODG		EQU		98H		;���������� ������-����������
CMD_RO		EQU		9AH		;���������� �����������
CMD_ORO		EQU		9CH		;������ ���������� �����������
CMD_SGL		EQU		9DH		;�������� �� �������� ��������
CMD_OSGL	EQU		9EH		;������ �������� �� �������� ��������
CMD_OsuOtw	EQU		0CAH	;���=����� ��������

;CMD_NP      EQU     07H     ;�������� �����
;CMD_ONP     EQU     0BH     ;������ ��������� ������
;CMD_NO      EQU     0DH     ;�������� �����������
;CMD_ONO     EQU     0EH     ;������ ��������� �����������
;CMD_NSK     EQU     13H     ;�������� �������� �������
;CMD_ONSK    EQU     15H     ;������ ��������� ��������� ��������
;CMD_ADN     EQU     16H     ;������������ ��������
;CMD_OADN    EQU     19H     ;������ ��������� ������������
;CMD_TO      EQU     1AH     ;������ �����������
;CMD_OTO     EQU     1CH     ;������ ������� �����������
;CMD_AD      EQU     21H     ;������������
;CMD_OAD     EQU     22H     ;������ ������������
;CMD_TP      EQU     23H     ;������ �����
;CMD_OTP     EQU     25H     ;������ ������� ������
;CMD_TSK     EQU     26H     ;������ ������� �������
;CMD_OTSK    EQU     29H     ;������ ������� ��������� ��������
;CMD_ADT     EQU     2AH     ;������ ������������
;CMD_OADT    EQU     2CH     ;������ ������� ������������
;CMD_MNV     EQU     31H     ;���������� �������
;CMD_OMNV    EQU     32H     ;������ ����������� ��������
;CMD_MR      EQU     34H     ;�������
;CMD_OMR     EQU     38H     ;������ ��������
;CMD_PRS     EQU     43H     ;������� �������
;CMD_MUP     EQU     46H     ;������� ����������
;CMD_OMUP    EQU     49H     ;������ �������� ����������
;;CMD_SU      EQU     4AH     ;�������� ����������
;;CMD_OSU     EQU     4CH     ;������ ��������� ����������
;CMD_WA      EQU     51H     ;����� �������������
;;CMD_ONB     EQU     52H     ;������ ������
;CMD_ROP     EQU     54H     ;��������� �� ����� ��������� �������
;CMD_RVP     EQU     58H     ;���������� � ����� ��������� �������
;;CMD_GS      EQU     68H     ;��������������� �����
;CMD_SG      EQU     70H     ;swetofor otkrytx
;;CMD_RS      EQU     72H     ;����������
;CMD_WSA     EQU     77H     ;��������������� ������� �������
;CMD_OSG     EQU     83H     ;swetofor zakrytx
;;CMD_WDSN    EQU     85H     ;��������� ���
;;CMD_ODSN    EQU     86H     ;������ ��������� ���
;;CMD_OGS     EQU     89H     ;������ ��������������� �����
;CMD_WT      EQU     8AH     ;����� � ��������
;CMD_SMN     EQU     8CH     ;����� �����������
;
;CMD_IR      EQU     91H     ;������������� ��������
;;CMD_oipsr   EQU     92H     ;������ ���������� �������� ������� ���������������
;;CMD_ozp     EQU     92H     ;������ �������� (�.�. �������� ��������)
;;CMD_isp     EQU     93H     ;���������� �������� �������
;;CMD_WDG     EQU     94H     ;��������� ���
;;CMD_ODG     EQU     98H     ;��������� ���
;CMD_URO      EQU     9AH     ;���������� �����������
;CMD_UORO     EQU     9CH     ;������ ���������� �����������
;CMD_RAB      EQU     0A1H    ;������� ������� �������
;CMD_PRW     EQU     0A2H    ;������ ��������������� �������
;CMD_VOS      EQU     0A4H    ;��������� �������� �������
;CMD_OVOS     EQU     0A8H    ;���������� �������� �������
;;CMD_oipsp   EQU     0B0H    ;������ ���������� �������� ������� �������
;CMD_RH       EQU     0B2H    ;��������� ������� �������
;CMD_ORH      EQU     0B4H    ;���������� ������� �������
;;CMD_uper    EQU     0E0H    ;���������� ���������

Type_tGorl  = 0000h
Type_nGorl  = 0008h
Gorochniy   = '�'     ;; ���  �
Fiktivniy	= '�'

CONTINUE_ACTION		= 'C';������� �� ��������� ���� action-�
RETURN_IF_NEXT		= 'N';������� �� ��������� action ��� �������� �������������� �������
RETURN_IF_JUMP		= 'J';������� �� ��������� action ��� �������� �������������� �������
RETURN_IF_NOEXE		= 'B';����� �� ������� � ������� ����������
RETURN_IF_EXIT		= 'E';��������� ����������� ��� ������
RETURN_IF_EXE		= 'G';���� ����� - ������� �� �������� �������������� ������� � ���������� ���� action-�


NULL = 00000000h
Flag_Cont_Par = 0;���� �������� ������
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
;				IFIDN <'&Opt'>,<'Pg_Prib'>
;					TypePar = TypePar OR 0040h  ;������� � �������� ������ ������ ���������(�� ����������� ���� ��������, ��� �����������)
;					UsePar = 1
;				ENDIF
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
;				IFIDN <'&Opt'>,<'NoAddMar'>
;						TypePar = TypePar OR 0020h  ;�� �������� �������������
;						UsePar = 1
;				ENDIF
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
;				IFIDN <'&Opt'>,<'NoAddMar'>
;						TypePar = TypePar OR 0020h  ;�� �������� �������������
;						UsePar = 1
;				ENDIF
				IFIDN <'&Opt'>,<'LastRCStn'>
						TypePar = TypePar OR 0040h  ;������� �� �������(��� ���� �������)
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'SPasKP'>
					TypePar = TypePar OR 0010h	;������ � ���� ����(����������� ���� �� � ����� ������� �������� ����������)
					UsePar = 1
				ENDIF
			ENDIF

			IFIDN <?CLS&ClsObj>,<?CLSTM> ;;���� ������ �������� ��������
				UsePar = 1
			ENDIF
			
			IF UsePar EQ 0
				.ERR   <���������������� �������� ��� ����������� �������, �����:���:�������� - &ClsObj:&KodObjRts:&Opt>
			ENDIF
		ENDM
	ENDIF
	
	DW ?CLS&ClsObj OR TypePar	;; ����� �������
	
	;;--------��� �������----------	
	IFIDN <?CLS&ClsObj>,<?CLSTM> ;;���� ������ �������� ��������
		DD Options
		;LCTM&Options = Lab
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
TypePar	= 0000h
	DD LinkComunObj				;; ��������� �� ��������� ��������� ������
	DD 0						;;��������� ����� ��� �������� ������ ������� � rts(��� ��������� ������)
	
	;;-------------------��� � �����------------------------------------
	IFNB <Options>
		FOR Opt,<Options>
			UsePar = 0 ;;���� ���������������� ���������

			IFIDN <?CLS&ClsObj>,<?CLSTM> ;;���� ������ �������� ��������
				IFIDN <'&Opt'>,<'TimeAV'>
					TypePar = TypePar OR 0001h	;������������ ������ ��
					UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'TimeTrans'>
					TypePar = TypePar OR 0002h	;������������ ������ �������� �������
					UsePar = 1
				ENDIF
								
				IFIDN <'&Opt'>,<'TimeOpenPr'>
					TypePar = TypePar OR 0001h	;������������ ������ �������� ��������
					UsePar = 1
				ENDIF
			ENDIF
			
			IF UsePar EQ 0
				.ERR   <���������������� �������� ��� ����������� �������, �����:���:�������� - &ClsObj:&KodObjRts:&Opt>
			ENDIF
		ENDM
	ENDIF
	
	DW ?CLS&ClsObj OR TypePar	;; ����� �������
	;;-------------------------------------------------------
	
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
BlokTU MACRO	NumBlk,Generators

	;;�������� ����� �����������
	NumGener = 0;
	FOR Generator,<Generators>
		NumGener = NumGener + 1
		IFIDN	<'&Generator'>,<'?'>
		ELSE
			Generator = (((NumBlk Shl 4)  And 0FFF0h) + NumGener) And 0FFFFh;1 ���� - ����� �����, 2-�� - ����� ����������
		ENDIF
	ENDM
	
	IF NumGener NE 8
		.ERR   <���������� ����������� �� ����� 8>	
    ENDIF
ENDM
;----------------------------------------------------------------------------
;			�������� ��������� �� �������������� ������
;----------------------------------------------------------------------------
CheckClass MACRO Par
thisClass = 1
	IfnDef ?CLS&Par
		thisClass = 0
	ENDIF


;	FOR ??xxx,<BS,DP,DS,KP,KS,NU,PG,PGB,PR,SO,SP,ST,TM,UP>
;		IFIDN <??xxx>,<Par>
;			thisClass = 1
;		ENDIF
;	EndM
ENDM
;----------------------------------------------------------------------------
;			�������� �������
;----------------------------------------------------------------------------
LcNStn	MACRO KodStn,EcpStnOwn

	IF	@SizeStr(KodStn) NE 6
		.ERR <�������� ���������� �������� � ���� �������>
	ENDIF
	IF	@SizeStr(EcpStnOwn) NE 6
		.ERR <�������� ���������� �������� � ������� ��������>
	ENDIF

	DB KodStn,0						;; ��� �������
	EcpStn EcpStnOwn				;; ������� �������� �������
ENDM
;----------------------------------------------------------------------------
;			IM - ������������ �����������
;----------------------------------------------------------------------------
LcRKP MACRO	ChlNum,RkpCode
	DW 0&ChlNum&H			;; ���������� ����� RtsChannel
	DB &RkpCode,0			;; ��� RtsRkp
	DD 0 					;; RtsRkp* (�����������)��������� ���
ENDM
;------
ImpObj  MACRO RKPLink,TypeImpact,CMD
	Local Lab
Lab:
	DD LinkImpact				;; ��������� �� ��������� ������ � ������
	
	DD RKPLink	;;��������� �� �������� ���

	IfIdn	<'&TypeImpact'>,<'IM_TU'>
		DB 'T'
		Dw	CMD
	ELSE
		IfIdn	<'&TypeImpact'>,<'IM_PI'>		
			DB 'P'
			Dd	CMD
		ELSE		
			IfIdn	<'&TypeImpact'>,<'IM_CMDTXT'>
				DB 'C'
				LcFrmNm CMD
            ELSE
            		.ERR   <����������� ��� �����������>	
            ENDIF
		ENDIF		
	ENDIF

LinkImpact		= Lab
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
;ChekPointerUsl MACRO Pointer
;		Local kolsym
;kolsym = 0
;ChkSumP = 0
;		FORC   ??c, <Pointer>
;			IFNB <'&??c'>
;				ChkSumP = ChkSumP + '&??c' + kolsym
;				kolsym = kolsym + 1
;			ENDIF
;		ENDM
;ENDM
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
;LcFrmNm1 MACRO	NmCmd,Txt,KodCmd1,KodCmd2
;		Local	LabKmd,LabWrk2
;
;LabKmd:
;		Db 10 dup(0)		;; ����� ��� ������ �������
;LabWrk2:
;
;	Org LabKmd
;		IFNB <'CMD_&NmCmd'>;������ ��,��,��,��
;			KodPar <NmCmd>
;		ELSE
;		.ERR <��� ����� ������� &NmCmd>
;		ENDIF
;		IFNB <'&Txt'>
;			KodPar <Txt>
;		ENDIF
;	Org LabWrk2
;
;	IFNB   <KodCmd1>
;		Db CMD_&KodCmd1
;	ELSE
;		Db 0
;	ENDIF 
;	
;	IFNB <KodCmd2>
;		Db CMD_&KodCmd2
;	ELSE
;		Db 0
;	ENDIF 
;	
;ENDM
;;----------------------------------------------------------
Off32Lc_O_U  MACRO   List,Kol

F_Cont_Par = 0 
	FOR     xxx,<List>
		
		IFIDN <'&xxx'>,<'Cont_Par'>
			F_Cont_Par = 1
		ELSE

			??TPar = ??TPar +01h
			
			IF (??TPar EQ 01h)
				if (?CLS&xxx EQ ?CLSPGB)
					DB 'B';������ �� dcltrack.dat
				else
					if (?CLS&xxx EQ ?CLSTM)
						DB 'L';������ �� dcl_lc.dat
					else
						DB 'R';������ �� dcl.dat
					EndIf
				EndIf
				Dw ?CLS&xxx    	;; ����� �������	
			EndIf

			IF (??TPar EQ 02h)
				if(@SizeStr(xxx) EQ 8)
					KodName <%@SubStr(xxx, 2, 6)> ;; ��� ������� � rts
				else
					.ERR <�������� ���-�� �������� � ���� ������� &xxx>
				endif
			EndIf

			IF (??TPar EQ 03h)
				DD 0	;; ����������� ����� ��� ������ ������� �� rts 4 �����
				IfIdn <'&xxx'>,<'?'>
					Dw 0	
				ELSE
					Dw xxx   ;;������� ������� 2�����
				EndIf
			EndIf
				
			IF	(??TPar  EQ 3)
				??TPar =   0
				IF	(Kol  EQ 1);;������� ���-�� ��������(3 ��������� = 1 ������)
					??KolList = ??KolList +1
				ENDIF
			ENDIF
		ENDIF
	ENDM
	
	If (F_Cont_Par EQ 1)
	
	else
		??TEnd_Par = 1
		DB 'N';�������� ������
	EndIf
ENDM
;;**********************************************************
Off32_Funs  MACRO   List

F_Cont_Par = 0 

	FOR ??xxx,<List>
		??KolList = ??KolList +1
		IFIDN <'&??xxx'>,<'Cont_Par'>
			F_Cont_Par = 1
		ELSE
			Dd ??xxx
			;Dd 0;������������ �����������
		ENDIF
	EndM
	
	If (F_Cont_Par EQ 1)
		Flag_Cont_Par = 1;;�������� ����
	else
		Flag_Cont_Par = 0;;������� ����
		Dd 0;�������� ������
		;Dw 0    ;; ����� �������
		;DD 0	;;	��� �������
		;DD 0	;; ����������� ����� ��� ������ ������� �� rts 4 �����
		;Dw 0	;;������� ������� 2�����
	EndIf
ENDM
;;**********************************************************
Off32_S_D  MACRO   List
	FOR ??xxx,<List>
		??KolList = ??KolList +1
		IFIDN <'&??xxx'>,<'Cont_Par'>
		ELSE
			Dd ??xxx
		ENDIF
	EndM
	
	IfIdn	<'&??xxx'>,<'Cont_Par'>
	
	else
		Dd 0;�������� ������
		;Dw 0    ;; ����� �������
		;DD 0	;;	��� �������
		;DD 0	;; ����������� ����� ��� ������ ������� �� rts 4 �����
		;Dw 0	;;������� ������� 2�����
	EndIf
ENDM
;;**********************************************************
;;              ������� ������
;;**********************************************************
OBJ_CMD		MACRO   ListWork
		Local	LWLabUsl, locChkSumP

??TPar = 0
??TEnd_Par = 0

		IFNB <ListWork>
			Off32Lc_O_U	<ListWork>,1  ;;� ��������� ���-�� ��������
			IF ??TPar NE 0
				;;If ??TEnd_Par NE 1
					.ERR <�������� ���������� ����������, � ������� �������>
				;;ENDIF
			ENDIF
		ENDIF
ENDM
;;**********************************************************
COMP_CMD	MACRO   ListWork

	Off32_Funs <ListWork>

ENDM
;;**********************************************************
;;         ������� ������� ��,��,��,��,����������
;;**********************************************************
LCcmdTU	MACRO   TextCmd,Fun_Acess,Fun_ConfAcess,List_Actions,Fun_Exp,Lab_SimpleCmd,Lab_Objs
		Local	Lab
Lab:
	DD LinkCmd ;;����� ��������� ������� ���� �������

KolCmd = KolCmd+1
errcod = 0
	LcFrmNm TextCmd
	IF errcod EQ 1
		.ERR <������ � ���� �������>
	ENDIF
??KolList	=	0
??TPar = 0
	
	DD		0;; �������������� ���������� (���������)
	DD		Fun_Acess		;;������� ����������� ������
	DD		Fun_ConfAcess	;;������� �������������� ����������� ������
	DD		List_Actions	;;������ �����������
	DD		Fun_Exp			;;������� ������������ �������������
	DD		Lab_SimpleCmd	;;������ ��������� ������
	DD		Lab_Objs		;;������ ��������� ������

	
LinkCmd = Lab
ENDM
;;**********************************************************
;;������� �������
;;**********************************************************
ChkSym MACRO Cods
	if( not ((('&Cods' GE '�') AND ('&Cods' LE '�')) OR (('&Cods' GE '0') AND ('&Cods' LE '9')) OR ('&Cods' EQ '-')));; ������� ������� ����� ��� ����� ��� '-'
		errcod = 1
	else
		errcod = 0
	endif
ENDM
;;**********************************************************
RT_OBJ	MACRO   Params

	IFNB <Params>

		??TPar = 0
		??FPrintAlias = 0
		FOR     Par,<Params>
			??TPar = ??TPar + 01h
			IFIDN <'&Par'>,<'Cont_Par'>
			ELSE
				if (??TPar EQ 01h)
					CheckClass Par
				ENDIF
			
				if ((??TPar EQ 01h) and thisClass) or (??TPar EQ 02h) or (??TPar EQ 03h);;��� �����
					IF (??TPar EQ 01h)
						if  (??FPrintAlias EQ 0);alias ������� �� ��� ���������
							DD 0;��������� �� alias �������
						EndIf
						
						if (?CLS&Par EQ ?CLSPGB)
							DB 'B';������ �� dcltrack.dat
						else
							if (?CLS&Par EQ ?CLSTM)
								DB 'L';������ �� dcl_lc.dat
							else
								DB 'R';������ �� dcl.dat
							EndIf
						EndIf
						Dw ?CLS&Par    	;; ����� �������
					EndIf

					IF (??TPar EQ 02h)
						KodName <%@SubStr(Par, 2, 6)> ;; ��� ������� � rts
						DD 0	;; ����������� ����� ��� ������ ������� �� rts 4 �����
					EndIf
					IF (??TPar EQ 03h)
						IfIdn <'&Par'>,<'?'>
							Dw 0	
						ELSE
							Dw Par   ;;������� ������� 2�����
						EndIf
					EndIf
				else;;������ ����������� ������ ������ �������
					DD Par;��������� �� alias �������
					??TPar =   0
					??FPrintAlias = 1
				ENDIF
			
			ENDIF
			;����� �� ������� ���������
			IF (??TPar EQ 03h)
				??FPrintAlias = 0
				??TPar =   0
			EndIf
		ENDM

		If ??TPar NE 0
			.ERR <�������� ���������� ����������, � ������� �������>
		ENDIF
			
		IfIdn	<'&Par'>,<'Cont_Par'>
		
		else
			DD 0;��������� �� alias �������
			DB 'N';�������� ������
		EndIf
		
	else;;������ ������
		DD 0;��������� �� alias �������
		DB 'N';�������� ������
	ENDIF
ENDM
;;**********************************************************
COMP_RT	MACRO   ListWork

	Off32_Funs <ListWork>

ENDM
;;**********************************************************
;;         ��������
;;**********************************************************
LCRoute	MACRO   CodeRt,RtAcc, Rt_KS, Rt_RC, Rt_ST, Rt_ADD, Rt_SFT, OwnCmd,OtmOwnCmd, SimpleRts

		Local	Lab,LabBegCode,LabEndCode, Nsym
Lab:
	DD 		LinkRt ;;����� ���������� ��������

	DD		RtAcc			;; �����������
	DD		Rt_KS			;; ����������� � ���������
	DD		Rt_RC			;; �� ��������
	DD		Rt_ST			;; �������
	DD		Rt_ADD			;; ������ �������(����� ������-�����������, ������������ ������)
	DD		Rt_SFT			;; ������� ������������
	DD		OwnCmd			;; ������ �� ��������������� ������� �� ��������� ������� ��������
	DD		OtmOwnCmd		;; ������ �� ��������������� ������� �� ������ ������� ��������
	DD		SimpleRts		;; ��������� ��������
	DD		0				;; �������������� ����������

	IF	@SizeStr(CodeRt) GT 22
		.ERR <��������� ���������� ���������� �������� � ���� ��������>
	ENDIF
	
	Nsym = 0
	forc ??x, <CodeRt>
	Nsym = Nsym + 1
		if ((Nsym GE 2) and (Nsym LE (@SizeStr(CodeRt) - 1)))
			ChkSym <??x>
			IF errcod EQ 1
				.ERR <������ � ���� ��������: ������ &??x>
			ENDIF
		ENDIF
	ENDM
	
LabBegCode:
	DB 20 dup(0)		;; ����� ��� ������ ��������
LabEndCode:
	Org LabBegCode
		DB		CodeRt		;; ����� ��������
	Org LabEndCode
	
LinkRt = Lab
ENDM
;;**********************************************************
;;         ����� �������
;;**********************************************************
Call_Fun	MACRO   NameFun,Params

IFNB <NameFun>
	DB 'F'	
	DD Fun1&NameFun	;��������� �� �������
ENDIF


	??TPar = 0
	??KPar = 0
	??FPrintAlias = 0
	FOR     Par,<Params>
		??TPar = ??TPar + 01h
		??KPar = ??KPar + 01h
		IFIDN <'&Par'>,<'Cont_Par'>
		ELSE
			if (??TPar EQ 01h)
				CheckClass Par
			ENDIF
			if ((??TPar EQ 01h) and thisClass) or (??TPar EQ 02h);;��� �����
				IF (??TPar EQ 01h)
					if  (??FPrintAlias EQ 0)
						DD 0;��������� �� alias �������
					EndIf
					
					if (?CLS&Par EQ ?CLSPGB)
						DB 'B';������ �� dcltrack.dat
					else
						if (?CLS&Par EQ ?CLSTM)
							DB 'L';������ �� dcl_lc.dat
						else
							if (?CLS&Par EQ ?CLSSTN)
								DB 'S';������ �������
							else
								DB 'R';������ �� dcl.dat
							EndIf
						EndIf
					EndIf
					Dw ?CLS&Par    	;; ����� �������
				EndIf

				IF (??TPar EQ 02h)
					KodName <%@SubStr(Par, 2, 6)> ;; ��� ������� � rts
					DD 0	;; ����������� ����� ��� ������ ������� �� rts 4 �����
				EndIf
			
			else;;������ ����������� ������ ������ �������
				DD Par;��������� �� alias �������
				??TPar =   0
				??FPrintAlias = 1
			ENDIF
		
		ENDIF
		IF	(??TPar  EQ 2)
			??TPar =   0
			??FPrintAlias = 0
		ENDIF
	ENDM

	If ??TPar NE 0
		.ERR <�������� ���������� ����������, � ������� �������>
	ENDIF
		
	IfIdn	<'&Par'>,<'Cont_Par'>
	
	else
		DD 0;��������� �� alias �������
		DB 'N';�������� ������
	EndIf

ENDM
;;**********************************************************
;;         ����� ������ ������� (�� ��������� AND) �� ������
;;**********************************************************
Call_Funs	MACRO   Funs
	Call_Funs_And <Funs>
ENDM
;;**********************************************************
;;         ����� ������ ������� �� AND �� ������
;;**********************************************************
Call_Funs_And	MACRO   Funs
	IF (Flag_Cont_Par EQ 1);;��� ������� ������ ��� ��� 
	Else
		DB 'A'	
	EndIF
	Off32_Funs <Funs>
ENDM
;;**********************************************************
;;         ����� ������ ������� �� OR �� ������
;;**********************************************************
Call_Funs_OR	MACRO   Funs
	IF (Flag_Cont_Par EQ 1);;��� ������� ������ ��� ��� 
	Else
		DB 'O'	
	EndIF
	Off32_Funs <Funs>
ENDM
;;**********************************************************
;;         ����� ������ ������� �� NOT �� ������
;;**********************************************************
Call_Funs_NO	MACRO   Funs
	IF (Flag_Cont_Par EQ 1);;��� ������� ������ ��� ��� 
	Else
		DB 'N'	
	EndIF
	Off32_Funs <Funs>
ENDM

;;**********************************************************
ConctructRetIF MACRO	ReturnFun
	Local	Lab, Lab1

	??KPar = 0
	FOR     Par,<ReturnFun>
		??KPar = ??KPar + 1
		IF (??KPar EQ 01h)
		
			If (('&Par' EQ 'CONTINUE_ACTION')or('&Par' EQ 'RETURN_IF_NEXT')or('&Par' EQ 'RETURN_IF_JUMP')or('&Par' EQ 'RETURN_IF_NOEXE')or('&Par' EQ 'RETURN_IF_EXE')or('&Par' EQ 'RETURN_IF_EXIT'))
				Db		Par ;;'G'���� �����, 'B'����� � ������� ��� 'C' ������� �� ��������� ���� action-�
				Lab:
				DD		0
				Lab1:
			Else
				Db		0
				DD		Par	;;��� ������� ��� �������
			ENDIF
			
		ELSE
			IF (??KPar EQ 02h)
			;;���� ������ �������� ������ ����� �� ����� ��� RETURN_IF_JUMP
			org Lab
				DD		Par
			org Lab1
			ELSE
				.ERR <����������������� ��������>
			ENDIF
		ENDIF
	ENDM
	
;	If (('&ReturnFun1' EQ 'CONTINUE_ACTION')or('&ReturnFun1' EQ 'RETURN_IF_NEXT')or('&ReturnFun1' EQ 'RETURN_IF_JUMP')or('&ReturnFun1' EQ 'RETURN_IF_NOEXE')or('&ReturnFun1' EQ 'RETURN_IF_EXE'))
;		Db		ReturnFun1 ;;'G'���� �����, 'B'����� � ������� ��� 'C' ������� �� ��������� ���� action-�
;		If('&ReturnFun1' EQ 'RETURN_IF_JUMP')
;			ifNB ReturnFun2
;				DD ReturnFun2;;��������� �� ������ action
;			Else
;				DD		0
;			ENDIF		
;		Else
;			DD		0
;		ENDIF
;	Else
;		Db		0
;		DD		ReturnFun1	;;��� ������� ��� �������
;	ENDIF

ENDM

Call_IF	MACRO	FunIF,FunTRUE,FunFALSE


	DB 'Y'			;��������� �� IF
	DD		FunIF	;;������� �������� �������
	
	ConctructRetIF <FunTRUE>
	ConctructRetIF <FunFALSE>
ENDM
;;**********************************************************
Call_Act	MACRO	Acts

	Off32_Funs <Acts>

ENDM
;;**********************************************************
IMPACTS_TU	MACRO List_Impacts
	IF (Flag_Cont_Par EQ 1);;��� ������� ������ ��� ��� 
	Else
		DB 'I' 				;;������� �����������
		DB 'T'				;;�������� �� ���� ��
	EndIF
	Off32_Funs <List_Impacts>	
ENDM
;;**********************************************************
IMPACT_PI	MACRO List_Impacts
	IF (Flag_Cont_Par EQ 1);;��� ������� ������ ��� ��� 
	Else
		DB 'I' 				;;������� �����������
		DB 'P'				;;� ���� ��,
	EndIF
	Off32_Funs <List_Impacts>	
		
ENDM
;;**********************************************************
IMPACT_CMDTXT	MACRO ImpactTxtCmd
	IF (Flag_Cont_Par EQ 1);;��� ������� ������ ��� ��� 
	Else
		DB 'I' 				;;������� �����������
		DB 'C'				;;��������� �������
	EndIF
	
	Off32_Funs <ImpactTxtCmd>
ENDM
;;**********************************************************
StartAction	MACRO PrefCond, ActionIMPACT, PostCond

	DD		PrefCond		;;������� ����������� ������
	DD		ActionIMPACT	;;������� ����������� ������
	DD		PostCond		;;������� ����������� ������
ENDM

;;**********************************************************
EndAction	MACRO

ENDM
;;**********************************************************
BegLcFun	MACRO
Cseg	ENDS
FuntionsSeg	Segment PUBLIC  Byte 'FuntionsSeg'
		ASSUME  CS:FuntionsSeg
ENDM
;;---------------------------------------
EndLcFun	MACRO
FuntionsSeg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegCmdTU	MACRO
Cseg	ENDS
CmdTUCseg	Segment PUBLIC  Byte 'CmdTUCseg'
		ASSUME  CS:CmdTUCseg
ENDM
;;---------------------------------------
EndCmdTU	MACRO
CmdTUCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegCmdTUMr	MACRO
Cseg	ENDS
CmdTUMrCseg	Segment PUBLIC  Byte 'CmdTUMrCseg'
		ASSUME  CS:CmdTUMrCseg
ENDM
;;---------------------------------------
EndCmdTUMr	MACRO
CmdTUMrCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegRoute	MACRO
Cseg	ENDS
RtCseg	Segment PUBLIC  Byte 'RtCseg'
		ASSUME  CS:RtCseg
ENDM
;;---------------------------------------
EndRoute	MACRO
RtCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegMRoute	MACRO
Cseg	ENDS
RtmCseg	Segment PUBLIC  Byte 'RtmCseg'
		ASSUME  CS:RtmCseg
ENDM
;;---------------------------------------
EndMRoute	MACRO
RtmCseg	ENDS
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
BegStnLc	MACRO KodStn,EcpStnOwn,NameStn,CondDU,CondRU,CondSU,CondTRANS,CondKF1,CondKF2,CondKF12,CondKFnorm

OPTION MZ :20h ;;����� ������ ������� ��������
STACK	Segment para STACK 'STACK'
STACK	ends

Cseg	Segment PUBLIC  Byte 'CODE'
	ASSUME  CS:Cseg
Cseg	ENDS

CmdTUCseg	Segment PUBLIC  Byte 'CmdTUCseg'
	ASSUME  CS:CmdTUCseg
CmdTUCseg	ENDS

CmdTUMrCseg	Segment PUBLIC  Byte 'CmdTUMrCseg'
	ASSUME  CS:CmdTUMrCseg
CmdTUMrCseg	ENDS

RtCseg	Segment PUBLIC  Byte 'RtCseg';;�������� ��������
	ASSUME  CS:RtCseg
RtCseg	ENDS
RtmCseg	Segment PUBLIC  Byte 'RtmCseg';;���������� ��������
	ASSUME  CS:RtmCseg
RtmCseg	ENDS

FuntionsSeg	Segment PUBLIC  Byte 'FuntionsSeg'
	ASSUME  CS:FuntionsSeg
FuntionsSeg	ENDS

Cseg	Segment PUBLIC  Byte 'CODE'
	ASSUME  CS:Cseg

start:

KolObjStn	=  0
KolCmd		=  0
KolComunObj	=  0

	IF	@SizeStr(KodStn) NE 6
		.ERR <�������� ���������� �������� � ���� �������>
	ENDIF
	IF	@SizeStr(EcpStnOwn) NE 6
		.ERR <�������� ���������� �������� � ������� ��������>
	ENDIF

	DB KodStn,0						;; ��� �������
	EcpStn EcpStnOwn				;; ������� �������� �������
	DW KolObjStn_MainStuct			;; ����� �������� �������	
	DD LinkObj_MainStuct			;; ����� ���������� ��������	
	DW KolCmd_MainStuct				;; ����� ������ ������ ����������
	DD LinkCmd_MainStuct			;; ����� ���������� �������� ������
	DD LinkRt_MainStuct				;; ����� ���������� �������� ���������
	DD LinkChangGr_MainStuct		;; ����� ���������� �������� ��������� � ������� ��	
	DD LinkImpact_MainStuct			;; ����� ���������� ������� �����������
	
	DD CondDU						;; ������� �������� ������ �� �������
	DD CondRU						;; ������� �������� ������ �� �������
	DD CondSU						;; ������� �������� ������ �� �������
	DD CondTRANS					;; ������� �������� ����������� ������ �������
	
	DD CondKF1						;; ������� �������� ������ 1-�� ������
	DD CondKF2						;; ������� �������� ������ 2-�� ������
	DD CondKF12						;; ������� �������� ������ 2-� �������
	DD CondKFnorm					;; ������� �������� ����������
	
	DB MaxLenDNCStack				;; ������ ���-�� ������ � ������� ���� ������(���)
	DB MaxLenSimpStack				;; ������ ���-�� ������ ���������� � �����
	DD 0							;; �������������� ���������� � ������� 						
	DB "&NameStn",0					;; �������� �������
	DB   8 dup(0)					;; ������

LinkComunObj =  0
LinkObj 	 =  0
LinkImpact	 =  0
LinkCmd 	 =  0
LinkRt		 =	0
LinkChangGr	 =  0
        ENDM
;;**********************************************************
EndStnLc   MACRO
	DB 4 dup(0FFh)
	Cseg	ENDS
	KolObjStn_MainStuct  	= KolObjStn
	KolCmd_MainStuct 		= KolCmd
	LinkObj_MainStuct 		= LinkObj
	LinkImpact_MainStuct 	= LinkImpact
	LinkCmd_MainStuct 		= LinkCmd
	LinkRt_MainStuct		= LinkRt
	LinkChangGr_MainStuct 	= LinkChangGr

	end start
ENDM
