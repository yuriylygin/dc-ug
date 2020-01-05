; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "��-�� (DcUg)"
#define MyAppVersion "1.0"
#define MyAppPublisher "��� ��� ���"
#define MyAppExeName "dcug.bat"
#define MyAppIcoName "dcug.ico"
#define Python "python-3.8.1-amd64-webinstall.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{7EA6B449-DBD8-4D85-9002-B8B0575A39DD}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
DefaultDirName={pf}\DcUg
DisableProgramGroupPage=yes
OutputDir="��-��"
OutputBaseFilename=dcug-setup
Compression=lzma
SolidCompression=yes
ChangesEnvironment=yes
AlwaysRestart=yes

; More options in setup section as well as other sections like Files, Components, Tasks...

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}";

[Files]
Source: "src\{#MyAppExeName}"; DestDir: "{app}\bin"; Flags: ignoreversion 
Source: "src\install.bat"; DestDir: "{app}"; Flags: ignoreversion 
Source: "src\uninstall.bat"; DestDir: "{app}"; Flags: ignoreversion 
Source: "..\dc-ug\*"; DestDir: "{app}\bin"; Flags: ignoreversion recursesubdirs createallsubdirs 
Source: "src\{#MyAppIcoName}"; DestDir: "{app}"
Source: "src\{#Python}"; DestDir: "{app}"; Flags: ignoreversion deleteafterinstall

[Icons]
Name: "{commonprograms}\{#MyAppName}"; Filename: "{app}\bin\{#MyAppExeName}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\bin\{#MyAppExeName}"; IconFilename: "{app}\{#MyAppIcoName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#Python}"; Parameters: "/passive"
Filename: "{app}\install.bat";
Filename: "{app}\bin\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

[UninstallRun]
Filename: "{app}\uninstall.bat";