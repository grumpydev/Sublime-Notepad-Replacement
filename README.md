## Sublime Text Launcher

### Introduction
This small utility redirects Notepad.exe to Sublime Text.

More information about Sublime Text can be found on [the Sublime Text website](http://www.sublimetext.com/).

### Installation

* Download [SublimeLauncher.zip](zip/SublimeLauncher.zip).
* Extract the three files in the ZIP (`SublimeLauncher.exe`, `ReplaceNotepad.bat` and `RevertNotepadRedirection.bat`) to the same directory as Sublime Text itself (usually `C:\Program Files\Sublime Text 3\`).
* Run `ReplaceNotepad.bat`. You will need to right-click and "_Run as administrator_" if using Vista or later.

Now when the system attempts to launch Notepad it will launch Sublime Text instead.

Enjoy!

### Uninstallation
* If you ever want to revert changes and return to Notepad, run `RevertNotepadRedirection.bat` as administrator.
