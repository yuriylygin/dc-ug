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
??Tu			=	01
??Ts			=	02
OrdCmd			=	04;;������� ��������
;;ConfOrdCmd		=	08;;�������� ������� � ��������������
;;-----------------------------------------------------------
Dsek   Macro    NameSek
       Local    Ldsek
Ldsek:
       Dd       LinkSek
       db		@CatStr(!',@SubStr(&NameSek, 2, @SizeStr(&NameSek) -2),!'),0
LinkSek =       Ldsek
       EndM
;;-----------------------------------------------------------
DclInf Macro    ListInf
       For      ??x,<ListInf>
       IfDif    <'&??x'>,<'***'>
??Inf&??x =  ??NumInf
       Db       '&??x',0
;;;;		 Dd  ??Inf&??x
		EndIf 
??NumInf =  ??NumInf + 1
       EndM
       EndM
;;-----------------------------------------------------------
BegFkl Macro	Kstr,Kstb
??NumLine = -1
??MaxStr  = Kstr
??MaxStb  = Kstb
		Dw	??MaxStr,??MaxStb
       EndM
;;-----------------------------------------------------------
DclLine Macro	Nl,LstLine
	If       Nl EQ ??NumLine +1
??KolS  =	0
		For	??x,<LstLine>
   	    	Db    @CatStr(0,@SubStr(&??x, 3, @SizeStr(&??x)-2),h)
			??KolS = ??KolS +1
		EndM
       	If ??KolS NE ??MaxStb
			.ERR   <����� �������� � ������ �� ����� ??MaxStb >
		EndIf
??NumLine = Nl
    Else
    	ERR  <������� ������� ���������� ����� >
	EndIf
EndM
;;-----------------------------------------------------------
EndFkl Macro
	If       ??NumLine NE ??MaxStr-1
		.ERR   <����� ����� �� ����� ??MaxStr >
	EndIf
EndM
;;-----------------------------------------------------------
FklStn MACRO  NameStn,KodTuTs,Inf_Stn,Inf_OWD,Inf_Gr1,Inf_Grf      ;; 00
       Local  AddrNameSt
BeginDeffParam EndS
BeginStnParam Segment
               ASSUME  CS:BeginStnParam
AddrNameSt:
            Db     @CatStr(!',@SubStr(&NameStn, 2, @SizeStr(&NameStn) -2),!'),0
BeginStnParam EndS
BeginDeffParam Segment
      ASSUME  CS:BeginDeffParam
      Dd     AddrNameSt
      IfNb  <KodTuTs>
      	Db		??&KodTuTs
		Else
			Db		0
		EndIf
      IfNb  <Inf_Stn>
		Db	??Inf&Inf_Stn
      Else
		Db		0
      EndIf
      IfNb	<Inf_OWD>
		Db		??Inf&Inf_OWD
      Else
		Db		0
      EndIf
      IfNb	<Inf_Gr1>
		Db		??Inf&Inf_Gr1
      Else
		Db		0
      EndIf
      IfNb  <Inf_Grf>
		Db		??Inf&Inf_Grf
      Else
		Db		0
      EndIf
EndM
;;-----------------------------------------------------------
BegParam Macro

OPTION MZ :20h ;;����� ������ ������� ��������
STACK segment para STACK 'STACK'
STACK ends

??Inf0   = 0
??NumInf = 0
LinkSek  = 0
LinkSysParam = 0
BeginDeffParam Segment PUBLIC  Byte 'CODE'
               ASSUME  CS:BeginDeffParam
         start:
         DD    EndSek
BeginDeffParam EndS
BeginStnParam Segment PUBLIC  Byte 'STN'
               ASSUME  CS:BeginStnParam
BeginStnParam EndS
BeginDeffParam Segment PUBLIC  Byte 'CODE'
               ASSUME  CS:BeginDeffParam

LinkSek = 0
         EndM
;;-----------------------------------------------------------
EndParam Macro
BeginDeffParam EndS
EndSek   =     LinkSek


end start
         Endm

DevPlt     = 0
DevPrn     = 1
;;-----------------------------------------------------------
System_Int Macro  NameParam,ValParam
           Local Lint
           Db    @CatStr(!',@SubStr(&NameParam, 2, @SizeStr(&NameParam) -2),!'),0,2
           Dw    ValParam
           EndM
System_Byte Macro  NameParam,ValParam
           Local Bbyte,Kbyte
           Db    NameParam,0
Bbyte:
           Db   0
           Irp   @x,<ValParam>
           Db    @x
           EndM
Kbyte:
           ORG    Bbyte
           Db     Kbyte-Bbyte-1
           ORG    Kbyte
           EndM
;;-----------------------------------------------------------
System_End Macro
           Db    0
           EndM
