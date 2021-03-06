ModePas		EQU 0
ModeAct		EQU 1

ModeTS		EQU 0
ModeTU		EQU 1

CHDC_66		EQU 0
CHDC_CNII	EQU 1

Usil_x1		EQU 3
Usil_x2		EQU 2
Usil_x5		EQU 1

;----------------------------------------------------------------------------
BegRtsServer	MACRO SrvCode,SrvNum,SrvType,SrvAlias,SrvName
Local Lab

Cseg	ENDS
RtsServerCseg	Segment
			ASSUME  CS:RtsServerCseg

LevelSrv	= LevelSrv + 1

Lab:
SrvOwn_&SrvCode:
;SrvOwn_&LevelSrv:
        DD LinkSrv				;; ��������� �� ��������� RtsServer � ������

		DD firstSrv
		DD nextSrv
		DD ownSrv

		DD firstChl&SrvCode

        DW 0&SrvNum&H			;; ���������� ����� RtsServer
        DB 0&SrvType&H			;; ��� RtsServer
		DB '&SrvCode',0			;; ��� RtsServer
								;; ��������� RtsServer
		DB  @CatStr(!',@SubStr(&SrvAlias, 2, @SizeStr(&SrvAlias) -2),!'),0
								;; �������� RtsServer
		DB @CatStr(!',@SubStr(&SrvName, 2, @SizeStr(&SrvName) -2),!'),0

LinkSrv = Lab
nextSrv	= Lab
ownSrv	= SrvOwn_&SrvCode
;ownSrv	= SrvOwn_&LevelSrv

nextChl	= 0

        ENDM
;----------------------------------------------------------------------------
EndRtsServer	MACRO SrvCode

LevelSrv	= LevelSrv - 1
;ownSrv	= SrvOwn_&LevelSrv

firstChl&SrvCode	= nextChl

RtsServerCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ENDM
;----------------------------------------------------------------------------
BegRtsChannel	MACRO ChlCode,ChlNum,ChlType,MdmSpeed,ChlAlias,ChlName
		Local Lab

Lab:
ChlOwn_&ChlCode:
		DD LinkChl				;; ��������� �� ��������� RtsChannel � ������

		DD nextChl				;; ��������� �� ��������� RtsChannel, ������������� OwnSrv
		DD OwnSrv				;; RtsServer, �������� ����������� RtsChannel

		DD firstRkp&ChlCode		;; ��������� �� ������ RtsRkp, ������������� ����� RtsChannel
		
        DW 0&ChlNum&H			;; ���������� ����� RtsChannel
        DB &ChlType			;; ��� RtsChannel
		DD MdmSpeed				;; �������� ������
		DB '&ChlCode',0			;; ��� RtsChannel
								;; ��������� RtsChannel
		DB @CatStr(!',@SubStr(&ChlAlias, 2, @SizeStr(&ChlAlias) -2),!'),0
								;; �������� RtsChannel
		DB @CatStr(!',@SubStr(&ChlName, 2, @SizeStr(&ChlName) -2),!'),0

		IF &ChlType EQ 'N'	;; ���� ����� ����,
			NevaParam			;; �� ����������� ������ ��� ������ �������� Drv.adsp
		ENDIF
		IF &ChlType EQ 'C'	;; ���� ����� ���,
			ChdcParam &ChlCode;; �� ����������� ������ ��� ������ �������� Drv.adsp
		ENDIF

LinkChl	= Lab
nextChl	= Lab
ownChl = ChlOwn_&ChlCode
nextRkp			= 0
LinkChlGrpChDC	= 0
		ENDM
;----------------------------------------------------------------------------
EndRtsChannel	MACRO ChlCode

firstRkp&ChlCode	= nextRkp

		IFDEF firstGrpChDC&ChlCode
			firstGrpChDC&ChlCode = LinkChlGrpChDC
			cntGrpChDC&ChlCode = __cntGrpChDC
		ENDIF

		ENDM
;----------------------------------------------------------------------------
RtsChlRkp	MACRO ChlNid,ChlDev,ChlName,ChlLev


		DW 0&ChlNid&H		;; ����� ���� ���������/���������� ������
		DB &ChlDev,0		;; ��� ���������� ��� ���������/���������� ������
							;; �������� ���������/���������� ������
		DB @CatStr(!',@SubStr(&ChlName, 2, @SizeStr(&ChlName) -2),!'),0
		DW ChlLev			;; ������� ��������� ������� ������ ���������/���������� ������

		ENDM
;----------------------------------------------------------------------------
RtsChlNeva	MACRO ChlNid,ChlDev,ChlName,ModeActPas,ModeTSTU

		DW 0&ChlNid&H		;; ����� ���� ���������/���������� ������
		DB &ChlDev,0		;; ��� ���������� ��� ���������/���������� ������
							;; �������� ���������/���������� ������
		DB @CatStr(!',@SubStr(&ChlName, 2, @SizeStr(&ChlName) -2),!'),0
		DW ModeActPas
		DW ModeTSTU

		ENDM
;----------------------------------------------------------------------------
RtsChlChdc	MACRO Nid,Dev,ChName,MdActPas,MdTSTU,MdChdc,UsilTS,UsilTSP,LnReadyTS,LnKvitImp,LvPok,LvQryTS,LvKvit,LvImpTS,LvFrq

		DW 0&Nid&H		;; ����� ���� ���������/���������� ������
		DB &Dev,0		;; ��� ���������� ��� ���������/���������� ������
						;; �������� ���������/���������� ������
		DB  @CatStr(!',@SubStr(&ChName, 2, @SizeStr(&ChName) -2),!'),0
		DW MdActPas
		DW MdTSTU
		DW MdChdc
		DW UsilTS
		DW UsilTSP
		DW LnReadyTS
		DW LnKvitImp
		DW LvPok
		DW LvQryTS
		DW LvKvit
		DW LvImpTS
		DW LvFrq

		ENDM
;----------------------------------------------------------------------------
ChdcParam	MACRO ChlCode

		DD	firstGrpChDC&ChlCode
		DW  cntGrpChDC&ChlCode	;; ���������� ����� �� � ������ ���
		DW 1					;; NumOutChl
		DW 0					;; CountTS
		DW 0					;; NoCountTS
		DW 0					;; CurOutStat - ������� ������ ���������� (��������/��������)
		DW 0					;; TraceGroup
		DW 0					;; CurStrTraceGroup
		DW 1					;; OutLev     - ������� ��������� ������ (��,��,��)
		DW 0					;; OutUsil    - ����������� �������� ��� �� L-1250 (5,2,1)
		DW 0					;; CurBuf
		DW 1					;; EnableWait
		DW 0					;; ModeADSP
		DW 0					;; FlgLoadOK
firstGrpChDC&ChlCode = 0
;cntGrpChDC&ChlCode = 0
__cntGrpChDC = 0

		ENDM
;----------------------------------------------------------------------------
ChdcGroup	MACRO GrpNum
		Local Lab
Lab:
		DD LinkChlGrpChDC		;; ��������� �� ���������� ������ � ������ ����� �� ��� RtsChannel
		DD LinkRkpGrpChDC		;; ��������� �� ���������� ������ � ������ ����� �� ��� RtsChdc
		DD LinkRkp				;; ��������� �� RtsChdc, �������� ����������� ������

__ChdcGrpNum = 0
		FORC ??c,<GrpNum>
			IF ('&??c' GE '1') AND ('&??c' LE '9')
				Bit = '&??c' - 30h
				__ChdcGrpNum = __ChdcGrpNum OR (1 Shl ( 9 - Bit))
			ENDIF
		ENDM

		DW __ChdcGrpNum			;; ����� ������ ���
		DB __RtsNumStb			;; ��������������� ����� ����� (�������) � ������� ��
		DD 0					;; allSost
		DW 0					;; ������������ 0 ��������
		DW 0					;; ������������ 1-19 ���������
		DW 0					;; ������������ 20 ��������
		DW 0					;; ������� ������� 1650 ��
		DW 0					;; ������� ������� 1950 ��
		DW 0					;; ������� ������� 2250 ��
		DW 0					;; ������� ������� 2550 ��

		DD 0					;; ����� ���������� ������ ������
		DW 0					;; Correct
		DW 0					;; Bad20
		DW 0					;; BadImp
		DW 0					;; BadGrp
		DW 21 DUP(00)			;; CntBadImp[BIT_IN_GRP]
		DW 0					;; rx_first
		DW 0					;; rx_error

LinkChlGrpChDC	= Lab
LinkRkpGrpChDC	= Lab
		ENDM
;----------------------------------------------------------------------------
NevaParam	MACRO
		NevaChannel <1,2,3,4>	;; [MAX_NUM_CHL_NEVA]
		DW 1					;; NumOutChl
		DW 0					;; CountTS
		DW 0					;; NoCountTS
		DW 0					;; CurOutStat - ������� ������ ���������� (��������/��������)
		DW 0					;; TraceGroup
		DW 0					;; CurStrTraceGroup
		DW 1					;; OutLev     - ������� ��������� ������ (��,��,��)
		DW 0					;; OutUsil    - ����������� �������� ��� �� L-1250 (5,2,1)
		DW 0					;; CurBuf
		DW 1					;; EnableWait
		DW 0					;; ModeADSP
		DW 0					;; FlgLoadOK

		ENDM
;----------------------------------------------------------------------------
NevaChannel	MACRO LstChl

		FOR NumChl,<LstChl>
			DB '&NumChl'																;; ChlNum;
			NevaGroup <1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23>		;; SostGrp[GRP_IN_CHL];
			NevaGroup <1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23>		;; NewSostGrp0[GRP_IN_CHL];
			NevaGroup <1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23>		;; NewSostGrp1[GRP_IN_CHL];
			NevaStat  <1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23>		;; StatGrp[GRP_IN_CHL];
			DW 0																		;; CurGrpStat
		ENDM

		ENDM
;----------------------------------------------------------------------------
NevaGroup	MACRO LstGrp

		FOR NumGrp,<LstGrp>
			DD 0					;; allSost
			DW 0					;; BegTime
			DW 0					;; Density
		ENDM

		ENDM
;----------------------------------------------------------------------------
NevaStat	MACRO LstGrp

		FOR NumGrp,<LstGrp>
			DW 0					;; Correct
			DW 0					;; Bad22
			DW 0					;; BadImp
			DW 0					;; BadGrp
			DW 22 DUP(00)			;; CntBadImp[BIT_IN_GRP]
			DW 0					;; rx_first
			DW 0					;; rx_error
		ENDM

		ENDM
;----------------------------------------------------------------------------
RtsRkp	MACRO RkpNum,RkpCode
		Local Lab
Lab:
@CatStr(RkpOwn_,@SubStr(RkpCode, 2, @SizeStr(RkpCode) -2)):
		DD LinkRkp				;; ��������� �� ��������� RtsRkp � ������

		DD nextRkp				;; ��������� �� ��������� RtsRkp, ������������� OwnChl
		DD OwnChl				;; RtsChannel, �������� ����������� RtsRkp
@CatStr(nextStnRkp,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2)):
								;; ��������� ��� ���� ���������� � RtsStation
		DD 0					;; ��������� �� ��������� RtsRkp, ������������� OwnStn
		DD 0					;; RtsStation, ������� ����������� RtsRkp

        DB RkpNum				;; ���������� ����� ��� � ������ �����
		DB &RkpCode,0			;; ��� RtsRkp
		DW 0					;; CntGrTS    - ����� ����� �������� �� ��� ������� ���
		DD 0					;; *DclTS     - ����� ���������� ������� �� ��� ������� ���
		DW 0					;; CntCmdTU   - ����� ������ �� ������ ����������
		DD 0					;; *DclCmdTU  - ����� ���������� �������� ������ ������ ����������
		DW 0					;; CntCmdOTU  - ����� ������ ���
		DD 0					;; *DclCmdOTU - ����� ���������� �������� ������ ���
		DW 0					;; CntBlkTS   ����� ������ ��
		DD 0					;; *DclBlkTS  ����� ���������� �������� ������ ��
		DD 0					;; *DclMatrOTU ����� ���������� �������� ������� ���
		DW 0					;; CntCmdRkpTU ����� ������ ������ ����������, ���������� �� ��
		DD 0					;; *DclCmdRkpTU ����� ���������� ������ ������ ������ ����������, ���������� �� ��
		DD 0					;; ����� ������ ���������� ��������� �� 0 �������� ���
		DD 0					;; ����� ������ ���������� ��������� �� 1 �������� ���
		DB 16 DUP(0FFh)			;; ����� ��� ���������� ��������� �� 0 ��������� ���
		DB 16 DUP(0FFh)			;; ����� ��� ���������� ��������� �� 1 ��������� ���
		DD 0					;; ����� �������� ��������� ������� 0 �������� ���
		DD 0					;; ����� �������� ��������� ������� 1 �������� ���
		DB 16 DUP(0FFh)			;; ����� ��� ��������� ������� 0 ��������� ���
		DB 16 DUP(0FFh)			;; ����� ��� ��������� ������� 1 ��������� ���
		DB  2 DUP(0)			;; LineConfig[2] - ��������� ���� ������������ ����� ����� K1K2 0 � 1 ���������� ���
		DB  2 DUP(0)			;; LevelRx[2]    - ������� ������� � dB �� ������ � ������� 0 � 1 ���������� ���
		DB  2 DUP(0)			;; LevelTx[2]    - ������� ������� � dB �� �������� � ������� 0 � 1 ���������� ���
		DW  0					;; CntMsgRxOK    - ���������� ��������� �������� ��������� ������� 0 ��������� ���
		DW  0					;; CntMsgRxOK    - ���������� ��������� �������� ��������� ������� 1 ��������� ���
		DW  0					;; CntMsgRxERR   - ���������� ��������� �������� ��������� ������� 0 ��������� ���
		DW  0					;; CntMsgRxERR   - ���������� ��������� �������� ��������� ������� 1 ��������� ���
		DB 16 DUP(0)			;; ������
LinkRkp	= Lab
nextRkp	= Lab
		ENDM
;----------------------------------------------------------------------------
RtsChDC	MACRO RkpNum,RkpCode,ListGrpChdc
		RtsRkp RkpNum,&RkpCode;; ��������� ��������� ��� � ��� ���

LinkRkpGrpChDC	= 0
__RtsNumStb		= 0
									;; ��������� �� ��������� ������ ��, ������������� RtsChDC
		DD	@CatStr(firstGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2))
									;; ��������� �� ������� ������ �� ��� ������ ��� ���������� ���������
		DD  @CatStr(curGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2))
									;; ���������� ����� ��, ������������� RtsChDC
		DW  @CatStr(cntGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2))
		DB 0						;; CountTime

		FOR grpChdc,<ListGrpChdc>
__RtsNumStb = __RtsNumStb + 1
__cntGrpChDC = __cntGrpChDC + 1
			IF '&grpChdc'NE '?'
			ChdcGroup &grpChdc
			ENDIF
		ENDM

@CatStr(firstGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2)) = LinkRkpGrpChDC
@CatStr(curGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2)) = LinkRkpGrpChDC
@CatStr(cntGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2)) = __RtsNumStb
		ENDM
;----------------------------------------------------------------------------
RtsNeva	MACRO RkpNum,RkpCode,BegGrp,EndGrp
		RtsRkp RkpNum, &RkpCode	;; ��������� ��������� ��� � ��� ���
		DB BegGrp				;; ��������� ����� ������ / ����� ������ "����"
		DB EndGrp				;; ��������  ����� ������ / ����� ������ "����"
		DB EndGrp				;; ����� ������� ������ ��� ������ ��� ���������� ���������
		DB 0					;; CountTime
		ENDM
;----------------------------------------------------------------------------
RtsDncRegion	MACRO RegCode,RegNum,RegType,RegAlias,RegName
		Local Lab
Lab:
RegOwn_&RegCode:
;RegOwn_&LevelReg:
        DD LinkReg				;; ��������� �� ��������� RtsDncRegion � ������
firstReg&RegCode:
		DD 0					;; ��������� �� ������ ��������� RtsDncRegion
		DD nextReg				;; ��������� �� ��������� ��������� RtsDncRegion
		DD ownReg				;; ��������� �� RtsDncRegion, � ������� ������ ���� RtsDncRegion
firstStnReg&RegCode:
		DD 0					;; ��������� �� ������ �������, ������������� ����� RtsDncRegion
        DW 0&RegNum&H			;; ���������� ����� RtsDncRegion
        DB 0&RegType&H			;; ��� RtsDncRegion
		DB '&RegCode',0			;; ��� RtsDncRegion
								;; ��������� RtsDncRegion
		DB @CatStr(!',@SubStr(&RegAlias, 2, @SizeStr(&RegAlias) -2),!'),0
								;; �������� RtsDncRegion
		DB @CatStr(!',@SubStr(&RegName, 2, @SizeStr(&RegName) -2),!'),0

nextStnReg&RegCode	= 0
LinkReg = Lab
nextReg	= Lab
        ENDM
;----------------------------------------------------------------------------
BegRtsDncRegion	MACRO RegCode,RegNum,RegType,RegAlias,RegName

Cseg	ENDS
RtsDncRegionCseg	Segment
		ASSUME  CS:RtsDncRegionCseg

LevelReg	= LevelReg + 1
nextReg		= 0
ownReg		= 0					;; ���� ��������� ������ ���� �������� ��� RtsDncRegion
		RtsDncRegion RegCode,RegNum,RegType,RegAlias,RegName
nextReg		= 0
ownReg		= RegOwn_&RegCode
;ownReg		= RegOwn_&LevelReg
        ENDM
;----------------------------------------------------------------------------
EndRtsDncRegion	MACRO RegCode
		Local Lab
Lab:
		ORG firstReg&RegCode
		DD  nextReg
		ORG Lab
LevelReg	= LevelReg - 1
nextReg		= 0
ownReg		= 0					;; ���� ��������� ������ ���� �������� ��� RtsDncRegion
;ownReg		= RegOwn_&LevelReg

RtsDncRegionCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ENDM
;----------------------------------------------------------------------------
EcpStn	MACRO StnEcp
		DB (0&StnEcp&H Shr 16) And 0FFh
		DB (0&StnEcp&H Shr 8) And 0FFh
		DB  0&StnEcp&H And 0FFh
		ENDM
;----------------------------------------------------------------------------
RtsDncRegionStation	MACRO StnCode, ListReg
LinkRegStn	= 0
		FOR _RegCode,<ListReg>
			IFNB <_RegCode>
				RtsRegStn &StnCode, _RegCode
			ENDIF
		ENDM
		ENDM
;----------------------------------------------------------------------------
RtsRegStn	MACRO StnCode, RegCode
		Local Lab, Lab1
Lab:

		DD nextStnReg&RegCode
		DD RegOwn_&RegCode
		DD LinkRegStn
		DD @CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
Lab1:
nextStnReg&RegCode	= Lab
LinkRegStn			= Lab

Cseg	ENDS
RtsDncRegionCseg	Segment
		ASSUME  CS:RtsDncRegionCseg

		ORG firstStnReg&RegCode
		DD nextStnReg&RegCode
		ORG Lab1

RtsDncRegionCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ENDM
;----------------------------------------------------------------------------
RtsStation	MACRO StnCode,StnType,StnEcp,StnOrd,StnDir,StnAlias,StnName,ListReg,ListRkp
		Local Lab, Lab1
Lab:
@CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2)):
		DD LinkStn				;; ��������� �� ��������� RtsStation � ������
@CatStr(firstStn,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2)):
		DD 0					;; ��������� �� ������ ��������� RtsStation
		DD nextStn              ;; ��������� �� ��������� ��������� RtsStation
		DD ownStn               ;; ��������� �� RtsStation, � ������� ������� ��� �������
Lab1:
??nextRkp	= 0

Cseg	ENDS
RtsServerCseg	Segment
		ASSUME  CS:RtsServerCseg

		FOR _RkpCode,<ListRkp>
			IFNB <_RkpCode>
				ORG @CatStr(nextStnRkp,@SubStr(&_RkpCode, 2, @SizeStr(&_RkpCode) -2))
				DD ??nextRkp
				DD @CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
				??nextRkp	= @CatStr(RkpOwn_,@SubStr(&_RkpCode, 2, @SizeStr(&_RkpCode) -2))
			ENDIF
        ENDM

RtsServerCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ORG Lab1
		DD ??nextRkp			;; ��������� �� ������ RtsRkp, ������������� �������
		DD @CatStr(firstRegStn,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
								;; ��������� �� ������ RtsDncRegion, � ������� ������ �������

        DB StnType				;; ��� RtsStation
		DB &StnCode,0			;; ��� RtsStation
		EcpStn StnEcp			;; ������� �������� �������
		DD StnOrd				;; �������� ��� �������
		DB StnDir				;; ���������� ����������� �� �������
		DB @CatStr(!',@SubStr(&StnAlias, 2, @SizeStr(&StnAlias) -2),!'),0		;; ��������� RtsStation
		DB @CatStr(!',@SubStr(&StnName, 2, @SizeStr(&StnName) -2),!'),0			;; �������� RtsStation
		DD 0					;; *PromStn	  ����� ������������ �������� �������
		DW 0					;; CntObj	  ����� �������� �������
		DW 0					;; CntGrTS	  ����� ����� �������� ��
		DD 0					;; *DclTS	  ����� ���������� ������ �� �������
		DW 0					;; CntBlkTU	  ����� ������ ��
		DD 0					;; *DclBlkTU  ����� ���������� �������� ������ ��
		DW 0					;; CntBlkOTU  ����� ������ ���
		DD 0					;; *DclBlkOTU ����� ���������� �������� ������ ���
		DW 0					;; CntBlkTI	  ����� ������ ��
		DD 0					;; *DclBlkTI  ����� ���������� �������� ������ ��
		DW 0					;; CntDisk	  ����� ������
		DD 0					;; *DclDisk	  ����� ���������� �������� ������
		DW 0					;; CntCmdTU	  ����� ������ ������ ����������
		DD 0					;; *DclCmdTU  ����� ���������� ������ ������ ������ ����������
		DW 0					;; CntCmdOTU  ����� ������������� ������
		DD 0					;; *DclCmdOTU ����� ���������� ������ ������������� ������
		DW 0					;; CntBlkTS   ����� ������ ��
		DD 0					;; *DclBlkTS  ����� ���������� �������� ������ ��
		DD 0					;; *DclMatrOTU ����� ���������� �������� ������� ���
		DW 0					;; CntCmdRkpTU ����� ������ ������ ����������, ���������� �� ��
		DD 0					;; *DclCmdRkpTU ����� ���������� ������ ������ ������ ����������, ���������� �� ��
		DB 16 DUP(0)			;; ������


		RtsDncRegionStation &StnCode, <ListReg>
@CatStr(firstRegStn,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))	= LinkRegStn

LinkStn	= @CatStr(stnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))	;; = Lab - ����� ����� ������� ��� ��� ������
nextStn	= @CatStr(stnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))	;; = Lab   ���� ���� ����������

		ENDM
;----------------------------------------------------------------------------
BegRtsStation	MACRO StnCode,StnType,StnEcp,StnOrd,StnDir,StnAlias,StnName,ListReg,ListRkp

LevelStn	= LevelStn + 1
nextStn		= 0
ownStn		= 0					;; ���� ��������� ������ ���� �������� ��� RtsStation
		RtsStation	&StnCode,StnType,StnEcp,StnOrd,StnDir,&StnAlias,&StnName,<ListReg>,<ListRkp>
nextStn		= 0
ownStn	= @CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
;ownStn	= StnOwn_&LevelStn
		ENDM
;----------------------------------------------------------------------------
EndRtsStation	MACRO StnCode
		Local Lab
Lab:
		ORG @CatStr(firstStn,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
		DD  nextStn
		ORG Lab
LevelStn	= LevelStn - 1
nextStn		= 0
ownStn		= 0					;; ���� ��������� ������ ���� �������� ��� RtsStation
;ownStn		= StnOwn_&LevelStn
		ENDM
;----------------------------------------------------------------------------
BegRtsNode	MACRO NodeCode,NodeNum,NodeNid,NodeAlias,NodeName,ListGate
		Local Lab, Lab1
Lab:
@CatStr(nodeOwn_,@SubStr(&NodeCode, 2, @SizeStr(&NodeCode) -2)):
        DD LinkNode			;; ��������� �� ��������� RtsNode � ������
							;; ��������� �� ������ RtsTask, ������������� ����� RtsNode
		DD @CatStr(firstTask,@SubStr(&NodeCode, 2, @SizeStr(&NodeCode) -2))
Lab1:
??nextGate	= 0

Cseg	ENDS
IpGateCseg	Segment
		ASSUME  CS:IpGateCseg

		FOR _GateCode,<ListGate>
			IFNB <_GateCode>
				ORG nextGateNode&_GateCode
				DD ??nextGate
				DD @CatStr(NodeOwn_,@SubStr(&NodeCode, 2, @SizeStr(&NodeCode) -2))
			
				??nextGate	= gateOwn_&_GateCode
			ENDIF
        ENDM

IpgateCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ORG Lab1
		DD ??nextGate			;; ��������� �� ������ RtsIpGate, ������������� ����� RtsNode

        DD NodeNum				;; ���������� ����� RtsNode
        DW NodeNid				;; nid ����
		DB &NodeCode,0			;; ��� RtsNode
								;; ��������� RtsNode
		DB @CatStr(!',@SubStr(&NodeAlias, 2, @SizeStr(&NodeAlias) -2),!'),0
								;; �������� RtsNode
		DB @CatStr(!',@SubStr(&NodeName, 2, @SizeStr(&NodeName) -2),!'),0

LinkNode = Lab
ownNode = @CatStr(nodeOwn_,@SubStr(&NodeCode, 2, @SizeStr(&NodeCode) -2))
nextTask = 0

        ENDM
;----------------------------------------------------------------------------
EndRtsNode	MACRO NodeCode

firstTask&NodeCode	= nextTask
		ENDM
;----------------------------------------------------------------------------
RtsTask	MACRO TaskNum
		Local Lab
Lab:
        DD LinkTask				;; ��������� �� ��������� RtsTask � ������

		DD nextTask				;; ��������� �� ��������� RtsTask, ������������� OwnNode
		DD OwnNode				;; RtsNode, �������� ����������� RtsTask

        DD TaskNum				;; ���������� ����� RtsTask

LinkTask = Lab
nextTask = Lab
        ENDM
;----------------------------------------------------------------------------
BegRtsIpNet	MACRO NetCode,NetAddr
		Local Lab
Cseg	ENDS
IpGateCseg	Segment
		ASSUME  CS:IpGateCseg


Lab:
@CatStr(netOwn_,@SubStr(&NetCode, 2, @SizeStr(&NetCode) -2)):
        DD LinkIpNet			;; ��������� �� ��������� RtsIpNet � ������

		DD @CatStr(firstGate,@SubStr(&NetCode, 2, @SizeStr(&NetCode) -2))

		DB &NetCode,0			;; ��� RtsIpNet
		DB &NetAddr,0			;; ����� RtsIpNet

LinkIpNet	= Lab
ownNet		= @CatStr(netOwn_,@SubStr(&NetCode, 2, @SizeStr(&NetCode) -2))
nextIpGate	= 0

        ENDM
;----------------------------------------------------------------------------
EndRtsIpNet	MACRO NetCode

firstGate&NetCode	= nextIpGate

IpgateCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ENDM
;----------------------------------------------------------------------------
BegRtsIpGate	MACRO GateCode,GateAddr,GateMask
		Local Lab
Lab:
@CatStr(gateOwn_,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2)):
		DD LinkIpGate				;; ��������� �� ��������� RtsGate � ������

		DD nextIpGate				;; ��������� �� ��������� RtsIpGate, ������������� RtsIpNet
		DD ownNet					;; ��������� �� RtsIpNet, ������� ����������� ���� ����
@CatStr(nextGateNode,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2)):
									;; ��������� ��� ���� ���������� � BegRtsNode
		DD 0						;; ��������� �� ��������� RtsIpGate, ������������� RtsNode
		DD 0						;; ��������� �� RtsNode, �������� ����������� ���� ����
									;; ��������� �� ������ RtsMsgRoute, ������������� ����� RtsIpGate
		DD @CatStr(firstMsgRoute,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
									;; ��������� �� ������ RtsMsgFilter, ������������� ����� RtsIpGate
		DD @CatStr(firstMsgFilter,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
									;; ��������� �� ������ RtsIpSocket �� ���� ������� ��� ���������� � ���������
		DD @CatStr(firstSocket,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
		
		DB &GateCode,0				;; ��� RtsIpGate
		DB &GateAddr,0				;; ����� RtsIpGate � ����
		DB &GateMask,0				;; ����� RtsIpGate ��� ���� �������
		DD 00						;; ����� ������ ������ ������ ����� �������������
		DD 00						;; ����� ���������� ����������� � ������
		DD 00						;; ����� ���������� ���������� ����������� � ������
		DD 00						;; ���������� ����������� � ������
		DD 00						;; ���������� ��������� ����������� � ������
		DB 16 DUP(0)				;; ������

		SockAddr					;; �������� ���������� ������ ��� �����

LinkIpGate		= @CatStr(gateOwn_,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
nextIpGate		= @CatStr(gateOwn_,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
ownGate			= @CatStr(gateOwn_,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
nextRoute		= 0
nextFilterGate	= 0
nextSocket		= 0

		ENDM
;----------------------------------------------------------------------------
EndRtsIpGate	MACRO GateCode

firstMsgRoute&GateCode	= nextRoute
firstMsgFilter&GateCode	= nextFilterGate
firstSocket&GateCode	= nextSocket
		ENDM
;----------------------------------------------------------------------------
BegRtsMsgRoute	MACRO RouteGate1,RouteGate2,RouteGate3
		Local Lab,Lab1
Lab:
        DD LinkMsgRoute			;; ��������� �� ��������� RtsMsgRoute � ������

		DD nextRoute			;; ��������� �� ��������� RtsMsgRoute, ������������� OwnGate
		DD ownGate				;; RtsIpGate, �������� ����������� RtsMsgRoute
Lab1:
		DD 00					;; ��������� �� ������ ������ �������� ���������
		DD 00					;; ��������� �� ������ RtsRouteGate

LinkMsgRoute	= Lab
nextRoute		= Lab
ownRoute		= Lab
LabRoute		= Lab1

nextFilterRoute	= 0
LinkRouteGate	= 0
;		RtsRouteGate	LinkMsgRoute, <RouteGate1>
		IFNB <RouteGate1>
			RtsGateParam	LinkMsgRoute, RouteGate1
		ENDIF
		IFNB <RouteGate2>
			RtsGateParam	LinkMsgRoute, RouteGate2
		ENDIF
		IFNB <RouteGate3>
			RtsGateParam	LinkMsgRoute, RouteGate3
		ENDIF

        ENDM
;----------------------------------------------------------------------------
EndRtsMsgRoute	MACRO
		Local Llab
Llab:
		ORG LabRoute
		DD nextFilterRoute
		DD LinkRouteGate
		ORG Llab

		ENDM
;----------------------------------------------------------------------------
FILTER_IN		= 0001H
FILTER_OUT		= 0002H
FILTER_INOUT	= 0003H

FILTER_ACCEPT	= 0000H
FILTER_EXCEPT	= 0004H

RtsMsgFilter	MACRO ListMsgType,ListDncReg,ListChl,ListStn,TypeInout,TypeExcept
		Local Lab,Lab1,Lllab
Lab:
        DD LinkMsgFilter		;; ��������� �� ��������� RtsMsgFilter � ������
		DD nextFilterGate		;; ��������� �� ��������� RtsMsgFilter, ������������� OwnGate
		DD ownGate				;; RtsIpGate, �������� ����������� RtsMsgFilter
		DD nextFilterRoute		;; ��������� �� ��������� RtsMsgFilter, ������������� OwnRoute
		DD ownRoute				;; RtsMsgRoute, �������� ����������� RtsMsgFilter

		IFNB <TypeInout>
			??TypeFilter = TypeInout
		ELSE
			??TypeFilter = FILTER_OUT
		ENDIF

		IFNB <TypeExcept>
			??TypeFilter = ??TypeFilter OR TypeExcept
		ELSE
			??TypeFilter = ??TypeFilter OR FILTER_ACCEPT
		ENDIF

		DW ??TypeFilter			;; �������� ������� (���� ������ - �������/�������� � ����������/�����������)
Lab1:
		DD 00					;; ��������� �� ������ ������ ����� ���������
		DD 00					;; ��������� �� ������ RtsDncRegion
		DD 00					;; ��������� �� ������ RtsChannel
		DD 00					;; ��������� �� ������ RtsStation

LinkMsgFilter	= Lab
nextFilterGate	= Lab
nextFilterRoute	= Lab
LabFilter		= Lab1

		RtsFilterMsgType	LinkMsgFilter, <ListMsgType>
		RtsFilterDncReg		LinkMsgFilter, <ListDncReg>
		RtsFilterChl		LinkMsgFilter, <ListChl>
		RtsFilterStn		LinkMsgFilter, <ListStn>
Lllab:
		ORG LabFilter
		DD LinkFilterMsgType
		DD LinkFilterDncReg
		DD LinkFilterChl
		DD LinkFilterStn
		ORG Lllab

        ENDM
;----------------------------------------------------------------------------
;RtsRouteGate	MACRO ownMsgRoute, RouteGate

;		IFNB <RouteGate>
;			FOR ??GateParam,<RouteGate>
;				IFNB <&??GateParam>
;					RtsGateParam ownMsgRoute, &??GateParam
;				ENDIF
;	        ENDM
;		ENDIF
;		ENDM
;----------------------------------------------------------------------------
RtsIpSocket	MACRO ownRouteGate,LstSock

		IFNB <LstSock>
			FORC ??item,<LstSock>
				IFNB <??item>
					RtsIpSkt ownRouteGate
				ENDIF
			ENDM
		ENDIF
		ENDM

;----------------------------------------------------------------------------
RtsIpSkt	MACRO ownRouteGate
		Local Lab,LabSkt,msgBuf,LabSkt1
Lab:
		DD nextSocket				;; ��������� �� ��������� RtsIpSocket �� ���� �������, ������������� RtsIpGate
		DD ownGate					;; ��������� �� RtsIpGate, �������� ����������� ���� RtsIpSocket
		DD nextSocketRoute			;; ��������� �� ��������� RtsIpSocket �� ���� �������, ������������� RtsRouteGate
		DD ownRouteGate				;; ��������� �� RtsRouteGate, �������� ����������� ���� RtsIpSocket
nextSocket		= Lab
nextSocketRoute	= Lab

LabSkt:
		DD 00						;; ��������� �� ����� ��� ������ ���������� ��������� (����� ���������� �����������)
		DD 00						;; ������� ��������� � ������ ��� ������ ���������
		DB 00						;; ���������� ���������� ���� ��� ���������� ���������� ���������
		DB 00						;; ������� ������ ������ ��������� (RECV_MSGHEAD/RECV_MSGBODY)
		DD 00						;; ����� ���������� ���������� (����� connect ��� accept)
		DD 00						;; ����� ��������� ��������� ������� ����������
		DD 00						;; ����� ������ ���������� ��������� �� ������
		DD 00						;; ����� �������� ���������� ��������� � �����
		DD 00						;; ���������� ��������� �������� ����� �����
		DD 00						;; ���������� ��������� ������������ ����� �����
		DD 00						;; ���������� ���� �������� ����� �����
		DD 00						;; ���������� ���� ������������ ����� �����
		DD 00						;; ���������� ������ ��� ������ ��������� ����� �����
		DD 00						;; ���������� ������ ��� �������� ��������� ����� �����
		DD 00						;; ���������� ����������� � ������
		DD 00						;; ���������� ��������� ����������� � ������
		DB 16 DUP(0)				;; ������
		SockAddr					;; struct sockaddr_in - ��������� ��� �������� ������

msgBuf:
		DB 256 DUP(00)				;; msgBuf[256] - ����� ��� ������ ��������� �� ����� ������
LabSkt1:
		ORG LabSkt
		DD msgBuf
		DD msgBuf
		ORG LabSkt1

		ENDM
;----------------------------------------------------------------------------
SockAddr	MACRO
										;; struct sockaddr_in - ��������� ��� �������� ������
		DB 00							;;	char  sin_len;
		DB 0							;;	char  sin_family;
		DW 0DC30H						;;	short sin_port;
		DD 0							;;	struct in_addr sin_addr { int s_addr; }
		DB 8 DUP(00)					;;	char sin_zero[8];

		DD 00							;; int sockfd - ���������� ������ ��� �����

		ENDM
;----------------------------------------------------------------------------
AUTO_CONNECT		= 0000H
QUERY_CONNECT		= 0001H
RESERVING_CONNECT	= 0002H
TUNNEL				= 0004H

RtsGateParam	MACRO ownMsgRoute,GateCode,ListMaxConnect,GateTypeConnect
		Local Lab,Lab1,Lab2

		IFNB <GateCode>
Lab:
			DD 00
			DD gateOwn_&GateCode
			DD LinkRouteGate
			DD ownMsgRoute
Lab1:
			DD 0
			DW 0
			DW 0

LinkRouteGate	= Lab
ParamLab		= Lab1

			??GateTypeCon = AUTO_CONNECT
			??GateMaxCon = 1

nextSocketRoute	= 0

			IFNB <ListMaxConnect>
				RtsIpSocket LinkRouteGate, ListMaxConnect

				IFNB <GateTypeConnect>
					??GateTypeCon = GateTypeConnect
				ELSE
					??GateTypeCon = AUTO_CONNECT
				ENDIF

				??MaxConnect = 0
				FORC ??maxcon,<ListMaxConnect>
					IFNB <??maxcon>
						??MaxConnect = ??MaxConnect + 1
					ENDIF
				ENDM
				??GateMaxCon = ??MaxConnect
			ELSE
				RtsIpSocket LinkRouteGate,?
				??GateTypeCon = AUTO_CONNECT
				??GateMaxCon = 1
			ENDIF
Lab2:
			ORG ParamLab
			DD nextSocketRoute		;; ��������� �� ������ RtsIpSocket �� ���� �������, ������������� RtsRouteGate
			DW ??GateTypeCon		;; �������� ����� ( ��� ���������� RtsIpGate (���� ��� �� �������), ������������� ��� ���)
			DW ??GateMaxCon			;; ������������ ���������� ���������� ��� ���� �������
			ORG Lab2
			
		ENDIF
		ENDM
;----------------------------------------------------------------------------
RtsFilterMsgType	MACRO ownMsgFilter, ListMsgType
		Local Lab, Lab1
Lab:
		FOR	??x,<ListMsgType>
			IFNB <??x>
				IFIDN	<??x>,<?>
					DW 0
				ELSE
					DW ??x
				ENDIF
			ELSE
				DW 0FFH
			ENDIF
		ENDM
Lab1:
		IF	Lab EQ Lab1 ;���� � ������ ������ �� ���������(IFNB <??x> - � FOR �� �������� ���� ListMsgType ������)
			DW 0FFH
		ENDIF
		
		DW 0				;; ������� ��������� ������
LinkFilterMsgType	= Lab
		ENDM
;----------------------------------------------------------------------------
RtsFilterDncReg	MACRO ownMsgFilter, ListDncReg
LinkFilterDncReg	= 0
		FOR _RegCode,<ListDncReg>
			IFNB <_RegCode>
			IFIDN <_RegCode>,<?>
			ELSE
				RtsFltReg ownMsgFilter, _RegCode
			ENDIF
			ENDIF
        ENDM
		ENDM
;----------------------------------------------------------------------------
RtsFltReg	MACRO ownMsgFilter, RegCode
		Local Lab
Lab:
		DD 00
		DD RegOwn_&RegCode
		DD LinkFilterDncReg
		DD ownMsgFilter
LinkFilterDncReg	= Lab
		ENDM
;----------------------------------------------------------------------------
RtsFilterChl	MACRO ownMsgFilter, ListChl
LinkFilterChl	= 0
		FOR _ChlCode,<ListChl>
			IFNB <_ChlCode>
			IFIDN <_ChlCode>,<?>
			ELSE
				RtsFltChl ownMsgFilter, _ChlCode
			ENDIF
			ENDIF
        ENDM
		ENDM
;----------------------------------------------------------------------------
RtsFltChl	MACRO ownMsgFilter, ChlCode
		Local Lab
Lab:
		DD 00
		DD ChlOwn_&ChlCode
		DD LinkFilterChl
		DD ownMsgFilter
LinkFilterChl	= Lab
		ENDM
;----------------------------------------------------------------------------
RtsFilterStn	MACRO ownMsgFilter, ListStn
LinkFilterStn	= 0
		FOR _StnCode,<ListStn>
			IFNB <_StnCode>
			IFIDN <_StnCode>,<?>
			ELSE
				RtsFltStn ownMsgFilter, _StnCode
			ENDIF
			ENDIF
        ENDM
		ENDM
;----------------------------------------------------------------------------
RtsFltStn	MACRO ownMsgFilter, StnCode
		Local Lab
Lab:
		DD 00
		DD @CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
		DD LinkFilterStn
		DD ownMsgFilter
LinkFilterStn	= Lab
		ENDM
;----------------------------------------------------------------------------
BegRts	MACRO

OPTION MZ :20h ;;����� ������ ������� ��������
STACK segment para STACK 'STACK'
STACK ends

Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg

Cseg	ENDS

RtsServerCseg	Segment PUBLIC  Byte 'RtsServerCseg'
		ASSUME  CS:RtsServerCseg

RtsServerCseg	ENDS

RtsDncRegionCseg	Segment PUBLIC  Byte 'RtsDncRegionCseg'
		ASSUME  CS:RtsDncRegionCseg
RtsDncRegionCseg	ENDS

IpGateCseg	Segment PUBLIC  Byte 'IpGateCseg'
		ASSUME  CS:IpGateCseg
IpGateCseg	ENDS

Cseg	Segment
		ASSUME  CS:Cseg

start:

LinkChl		= 0
LinkSrv		= 0
LevelSrv	= 0
firstSrv	= 0
nextSrv		= 0
SrvOwn_0	= 0
ownSrv		= SrvOwn_0

LinkReg		= 0
LevelReg	= 0
firstReg	= 0
nextReg		= 0
RegOwn_0	= 0
ownReg		= RegOwn_0

LinkStn		= 0
LevelStn	= 0
firstStn	= 0
nextStn		= 0
StnOwn_0	= 0
ownStn		= StnOwn_0


LinkRkp		= 0

LinkNode		= 0
ownNode			= 0

LinkTask		= 0

LinkIpNet		= 0
ownNet			= 0

LinkIpGate		= 0
ownGate			= 0

LinkMsgRoute	= 0
LinkMsgFilter	= 0

LinkFilterMsgType	= 0
LinkFilterDncReg	= 0
LinkFilterChl		= 0
LinkFilterStn		= 0
LinkRouteGate		= 0

LabRoute			= 0
LabFilter			= 0
ParamLab			= 0

		DD	_RtsSrv			;; ��������� �� ������ RtsServer
		DD	_RtsChannel		;; ��������� �� ������ RtsChannel
		DD  _RtsRkp			;; ��������� �� ������ RtsRkp
		DD	_RtsDncReg		;; ��������� �� ������ RtsDncRegion
		DD  _RtsStation		;; ��������� �� ������ RtsStation
		DD	_RtsNode		;; ��������� �� ������ RtsNode
		DD	_RtsTask		;; ��������� �� ������ RtsTask
		DD	_RtsIpNet		;; ��������� �� ������ RtsIpNet
		DD	_RtsIpGate		;; ��������� �� ������ RtsIpGate
		DD	_RtsMsgRoute	;; ��������� �� ������ RtsMsgRoute
		DD	_RtsMsgFilter	;; ��������� �� ������ RtsMsgFilter

		ENDM
;----------------------------------------------------------------------------
EndRts	MACRO
Cseg	ENDS
_RtsSrv			= LinkSrv
_RtsChannel		= LinkChl
_RtsRkp			= LinkRkp
_RtsDncReg		= LinkReg
_RtsStation		= LinkStn
_RtsNode		= LinkNode
_RtsTask		= LinkTask
_RtsIpNet		= LinkIpNet
_RtsIpGate		= LinkIpGate
_RtsMsgRoute	= LinkMsgRoute
_RtsMsgFilter	= LinkMsgFilter

end start
		ENDM
;----------------------------------------------------------------------------
