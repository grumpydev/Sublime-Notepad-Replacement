// SublimeLauncher.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "SublimeLauncher.h"
#include <shellapi.h>

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(hPrevInstance);

	LPTSTR arguments = new TCHAR[wcslen(lpCmdLine)+2];
	arguments[0] = L'\0';

	wcscat(arguments, L"\"");
	for( int i=1; i < __argc; i++)
	{
		if (wcscmp(__wargv[i], L"-z") == 0)
		{
			// -z specificed - skip the next parameter
			i++;
		}
		else
		{
			wcscat(arguments, __wargv[i]);
			wcscat(arguments, L" ");
		}
	}
	wcscat(arguments, L"\"");
	
	wchar_t* sublimeExe = _wcsdup(__wargv[0]);
	sublimeExe[wcslen(sublimeExe) - wcslen(L"SublimeLauncher.exe")] = '\0';
	wcscat(sublimeExe, L"sublime_text.exe");

	ShellExecute(NULL, NULL, sublimeExe, arguments, NULL, nCmdShow);

	return (int) 0;
}


