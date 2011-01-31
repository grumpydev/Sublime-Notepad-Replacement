@echo off
@echo If you see "ERROR: Access is denied." you need to right click and "Run as Administrator"
reg add "HKLM\Software\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\notepad.exe" /v "Debugger" /t REG_SZ /d "\"%~dp0SublimeLauncher.exe\" -z" /f
pause