@echo off
@echo.
if not exist "%~dp0sublime_text.exe" (
	echo Warning: Can't find sublime_text.exe. You must put these files in your
	echo Sublime Text directory before running this file.
	echo Press enter to continue anyway...
	@echo.
	pause
)
echo If you see "ERROR: Access is denied." then you need to right click and use "Run as Administrator".
@echo.
echo Redirecting Notepad.exe to SublimeLauncher.exe...
reg add "HKLM\Software\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\notepad.exe" /v "Debugger" /t REG_SZ /d "\"%~dp0SublimeLauncher.exe\" -z" /f
@echo.
pause
