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
??Par215 =  7Eh        ;; ��� �
??Par247 =  7Eh        ;; ��� �
??Par195 =  64h+80h    ;; ��� �
??Par227 =  64h+80h    ;; ��� �
??Par202 =  6Bh+80h    ;; ��� �
??Par234 =  6Bh+80h    ;; ��� �

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
CMD_MR      EQU     34H
CMD_OMR     EQU     38H	
CMD_MUP     EQU     46H     ;������� ����������
CMD_OMUP    EQU     49H     ;������ �������� ����������
;CMD_SU     EQU     4AH     ;�������� ����������
;CMD_OSU    EQU     4CH     ;������ ��������� ����������
CMD_WA      EQU     51H     ;����� �������������
;CMD_ONB     EQU     52H     ;������ ������
CMD_ROP     EQU     54H     ;��������� �� ����� ��������� �������
CMD_RVP     EQU     58H     ;���������� � ����� ��������� �������
;CMD_GS      EQU     68H     ;��������������� �����
;CMD_SG      EQU     70H     ;swetofor otkrytx
;CMD_RS      EQU     72H     ;����������
;CMD_OSG     EQU     83H     ;swetofor zakrytx
;CMD_WDSN    EQU     85H     ;��������� ���
;CMD_ODSN    EQU     86H     ;������ ��������� ���
;CMD_OGS     EQU     89H     ;������ ��������������� �����
CMD_WT      EQU     8AH     ;����� � ��������
;CMD_SMN     EQU     8CH     ;����� �����������
;CMD_IR      EQU     91H     ;������������� ��������
;CMD_oipsr   EQU     92H     ;������ ���������� �������� ������� ���������������
;CMD_ozp     EQU     92H     ;������ �������� (�.�. �������� ��������)
;CMD_isp     EQU     93H     ;���������� �������� �������
;CMD_WDG     EQU     94H     ;��������� ���
;CMD_ODG     EQU     98H     ;��������� ���
CMD_URO      EQU     9AH     ;���������� �����������
CMD_UORO     EQU     9CH     ;������ ���������� �����������
;CMD_RAB     EQU     0A1H    ;������� ������� �������
;CMD_PRW     EQU     0A2H    ;������ ��������������� �������
CMD_VOS      EQU     0A4H    ;��������� �������� �������
CMD_OVOS     EQU     0A8H    ;���������� �������� �������
;CMD_oipsp   EQU     0B0H    ;������ ���������� �������� ������� �������
CMD_RH       EQU     0B2H    ;��������� ������� �������
CMD_ORH      EQU     0B4H    ;���������� ������� �������
;CMD_uper    EQU     0E0H    ;���������� ���������

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
BegCmdTU MACRO   NameStn
                PUBLIC DclCmdTu&NameStn
DclCmdTu&NameStn  LABEL   BYTE
        ENDM
;;**********************************************************
EndCmdTU MACRO   NameStn
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
        IFNB   <KodCmd>
__KolSym =      __KolSym + 1  ;; ���������� �������� � �������
         Db      CMD_&KodCmd
        EndIf 
LabWrk2:
        Org     LabKmd
        Db      __KolSym      ;; ���������� �������� � �������
        Org     LabWrk2       ;; + ���� ���� �������
        ENDM

;;**********************************************************
IcmdTU	MACRO   TextCmd,ListWork
		Local	LabCnt,LabWrk
;;		Db	"Cmd->"
__KolCmd  =     __KolCmd+1
        FrmNm   TextCmd
??KolLIst	=	0
		Db		'O'
LabCnt:
		Db		0
        Off32	<ListWork>
LabWrk:
        Org     LabCnt
        Db      ??KolList	  ;; ���������� ����������
        Org     LabWrk        ;; 
        ENDM
;;**********************************************************
IcmdTU_S	MACRO   TextCmd,ListWork
		Local	LabCnt,LabWrk
__KolCmd  =     __KolCmd+1
;;;;		Db	'CmdS->'
        FrmNm   TextCmd
??KolLIst	=	0
		Db		'S'
LabCnt:
		Db		0
        Off32	<ListWork>
LabWrk:
        Org     LabCnt
        Db      ??KolList	  ;; ���������� ����������
        Org     LabWrk        ;; 
        ENDM
;;**********************************************************
