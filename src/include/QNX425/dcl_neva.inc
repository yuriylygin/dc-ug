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
??Par207 =  70h+80h    ;; ��� �
??Par239 =  70h+80h    ;; ��� �
??Par196 =  65h        ;; ��� �
??Par228 =  65h        ;; ��� �
??Par204 =  6Dh+80h    ;; ��� �
??Par236 =  6Dh+80h    ;; ��� �
??Par205 =  6Eh+80h    ;; ��� �
??Par237 =  6Eh+80h    ;; ��� �
??Par206 =  6Fh		   ;; ��� �
??Par238 =  6Fh		   ;; ��� �
??Par215 =  7Eh        ;; ��� �
??Par247 =  7Eh        ;; ��� �

;       ���� ������ ��  (�������� �� �������)
;-----------------------------------------------------
NP      EQU     07H     ;�������� �����
ONP     EQU     0BH     ;������ ��������� ������
NO      EQU     0DH     ;�������� �����������
ONO     EQU     0EH     ;������ ��������� �����������
NSK     EQU     13H     ;�������� �������� �������
ONSK    EQU     15H     ;������ ��������� ��������� ��������
ADN     EQU     16H     ;������������ ��������
OADN    EQU     19H     ;������ ��������� ������������
TO      EQU     1AH     ;������ �����������
OTO     EQU     1CH     ;������ ������� �����������
TP      EQU     23H     ;������ �����
OTP     EQU     25H     ;������ ������� ������
TSK     EQU     26H     ;������ ������� �������
OTSK    EQU     29H     ;������ ������� ��������� ��������
ADT     EQU     2AH     ;������ ������������
OADT    EQU     2CH     ;������ ������� ������������
MNV     EQU     31H     ;���������� �������
OMNV    EQU     32H     ;������ ����������� ��������
MUP     EQU     46H     ;������� ����������
OMUP    EQU     49H     ;������ �������� ����������
SU      EQU     4AH     ;�������� ����������
OSU     EQU     4CH     ;������ ��������� ����������
WA      EQU     51H     ;����� �������������
ONB     EQU     52H     ;������ ������
ROP     EQU     54H     ;��������� �� ����� ��������� �������
RVP     EQU     58H     ;���������� � ����� ��������� �������
;GS      EQU     68H     ;��������������� �����
;SG      EQU     70H     ;swetofor otkrytx
;RS      EQU     72H     ;����������
MM      EQU     74H     ;��������� ����������� ������
OMM     EQU     75H     ;���������� ����������� ������
AUM     EQU     76H     ;��������� ���
OAUM    EQU     78H     ;���������� ���
BS       EQU     7AH     ;��������� �� (��� �������)
OBS      EQU     7BH     ;���������� ��
;OSG     EQU     83H     ;swetofor zakrytx
;WDSN    EQU     85H     ;��������� ���
;ODSN    EQU     86H     ;������ ��������� ���
;OGS     EQU     89H     ;������ ��������������� �����
WT      EQU     8AH     ;����� � ��������
SMN     EQU     8CH     ;����� �����������
;IR      EQU     91H     ;������������� ��������
;oipsr   EQU     92H     ;������ ���������� �������� ������� ���������������
;ozp     EQU     92H     ;������ �������� (�.�. �������� ��������)
;isp     EQU     93H     ;���������� �������� �������
;WDG     EQU     94H     ;��������� ���
;ODG     EQU     98H     ;��������� ���
URO      EQU     9AH     ;���������� �����������
UORO     EQU     9CH     ;������ ���������� �����������
;RAB     EQU     0A1H    ;������� ������� �������
;PRW     EQU     0A2H    ;������ ��������������� �������
VOS      EQU     0A4H    ;��������� �������� �������
OVOS     EQU     0A8H    ;���������� �������� �������
;oipsp   EQU     0B0H    ;������ ���������� �������� ������� �������
RH       EQU     0B2H    ;��������� ������� �������
ORH      EQU     0B4H    ;���������� ������� �������
;uper    EQU     0E0H    ;���������� ���������
PUT     EQU     1BH     ;���������� �������� ����
OPUT    EQU     1DH     ;������ ���������� �������� ����

;;----------------------------------------------------------
????KodP  Macro  KodSym
        IfDef ??Par&KodSym
          ????kp    =    (??Par&KodSym+0)
        Else
          Dw ??Par&KodSym
        EndIf
EndM
KodPar   MACRO   str
        FORC   ??c, <str>
          IFNB <'&??c'>
            ????KodP  %('&??c'+0)
            Db     ????kp
            __KolSym  = __KolSym + 01h
          ENDIF
        ENDM
ENDM
;;**********************************************************
BegCmdTU   MACRO   NameTu,KodStn
__KolCmd = 0
		Db		'&NameTu',0
		Dw		LinkDclTU
		Dw		CntCmdTU&NameTu
		PUBLIC  DclCmdTU&NameTu
DclCmdTU&NameTu      LABEL   BYTE
LinkDclTU	=	DclCmdTU&NameTu - BegCseg

__KodStn = 0
        FOR     Bit, <KodStn>
__KodStn =    __KodStn + (1 Shl ( 32 - Bit))
        ENDM
        ENDM
;;**********************************************************
EndCmdTU   MACRO   NameTu
CntCmdTU&NameTu  =  __KolCmd
		ENDM
;;**********************************************************
StnCodeTU MACRO KodStn

__KodStn = 0
        FOR     Bit, <KodStn>
__KodStn =    __KodStn + (1 Shl ( 32 - Bit))
        ENDM
        ENDM
;;**********************************************************
FrmNm   MACRO   NmCmd,KodCmd
        Local   LabKmd,LabWrk2
__KolSym =      0
LabKmd:
        Db      0             ;; ���������� �������� � �������
        IFNB    <'&NmCmd'>
          KodPar  <NmCmd>
        ENDIF

        Db      KodCmd
LabWrk2:
        Org     LabKmd
        Db      __KolSym + 1  ;; ���������� �������� � �������
        Org     LabWrk2       ;; + ���� ���� �������
        ENDM
;;**********************************************************
FrmKn   MACRO   ListBit
        For     Bit,<ListBit>
__KmdNeva =  __KmdNeva + (1 Shl ( 32 - Bit))
        ENDM
        ENDM
;;**********************************************************
CmdTU   MACRO   TextCmd,NumGrp,BodyCmd
        Local   LabKmd
__KolCmd  =     __KolCmd+1
__KmdNeva   =     __KodStn
        FrmNm   TextCmd
        FrmKn   <NumGrp>
        FrmKn   <BodyCmd>
        Dw      (__KmdNeva Shr 16) And 0FFFFh
        Dw       __KmdNeva         And 0FFFFh
        ENDM
;;**********************************************************
DclStnNeva MACRO NumStn,NameStn,NetNumStn,BegGrp,EndGrp
           Local LabStn
LabStn:
      Dd      ??LinkStn
      Db      16 Dup (0FFh)
      Db      NumStn      ;; ���������� ����� ������� � ����� �����
      Db      '&NameStn'  ;; ��� �������� �������
      NetMark NetNumStn   ;; ������� �������� �������
      Dd      0           ;; *PromStn   ����� ������������ �������� �������
      Dw      0           ;; KolObj     ����� �������� �������
      Dw      0           ;; KolGrStn   ����� ����� �������� ��
      Dd      0           ;; *PdclTC    ����� ���������� ������ �� �������
      Dw      0           ;; KolCmd     ����� ������ ������ ����������
      Dd      0           ;; *Pcmd
      Dw      0           ;; KolCmdOt   ����� ������������� ������
      Dd      0           ;; *PcmdOt
      Db      BegGrp      ;; ��������� ����� ������ / ����� ������ "����"
      Db      EndGrp      ;; ��������  ����� ������ / ����� ������ "����"
      Db      EndGrp      ;; ����� ������� ������ ��� ������ ��� ���������� ���������
      Db      0           ;; ������� 5-��� ���������� � ������� ���������� ��������� ���������
   ??Kstn   = ??Kstn+1
   ??LinkStn= LabStn
ENDM
;;**********************************************************
