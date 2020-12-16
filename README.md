# CartInstall
An uncreatively named __[GodMode9](https://github.com/d0k3/GodMode9)__ fork for installing 3DS cartridge games to the SD

## General Info
As stated above, this is merely a fork of [GodMode9](https://github.com/d0k3/GodMode9). I played no part in the creation of any of GodMode9.
Installing cartridges to the SD this way bypasses the need to have 2 times as much space free as the game actually takes, and takes about 50% less time than the traditional method of converting the cartridge image to a cia, then installing that with FBI.
This tool is very far from being thouroughly tested, so if you encounter any problems, please submit them to the issue tracker.

## Usage
Download `CartInstall.firm` from the [releases page](https://github.com/aspargas2/CartInstall/releases) and run it with the chainloader of your choice.

If you have an EmuNAND, you will be asked which NAND to which you would like to install the game. In the case of multiple EmuNANDs, the first one (i.e. the one that first mounts when you enter GodMode9) will always be used if EmuNAND is selected.

If you somehow manage to install this tool to your firm0, you should first give yourself a solid facepalm. Then put [safeb9sinstaller](https://github.com/d0k3/safeb9sinstaller/releases)'s `.firm` on the sd root as `iderped.firm` and [boot9strap](https://github.com/SciresM/boot9strap/releases)'s `boot9strap.firm` and `boot9strap.firm.sha` in a `boot9strap` folder on the sd root, and boot the console. You should be in safeb9sinstaller, you doofus.

## How to build this / developer info
Build `CartInstall.firm` by running `build.bat`. This requires [firmtool](https://github.com/TuxSH/firmtool), [Python 3.5+](https://www.python.org/downloads/) and [devkitARM](https://sourceforge.net/projects/devkitpro/) installed.
Simply running `make` will build a normal-looking GodMode9. There is no use to doing this, and some scripting may be broken.

For additional customization, you may choose the internal font by replacing `font_default.pbm` inside the `data` directory.
You may also hardcode the brightness by adding ` FIXED_BRIGHTNESS=x` to the end of line 2 in `build.bat`, whereas `x` is a value between 0...15.

## License
You may use this under the terms of the GNU General Public License GPL v2 or under the terms of any later revisions of the GPL. Refer to the provided `LICENSE.txt` file for further information.


## Credits:
* Everyone who contributed in any way to [d0k3](https://github.com/d0k3)'s [GodMode9](https://github.com/d0k3/GodMode9), as this is just a fork of it
* [3DBrew](https://www.3dbrew.org/wiki/Main_Page) and all its editors, for being an essential resource in making this tool
* [@BpyH64](https://github.com/BpyH64) for figuring out the CMACs on the `.cmd` files, without which this tool would not be possible
* [@wwylele](https://github.com/wwylele) for reverse engineering and documenting the internal format of the 3DS's `.db` files, and for creating [a tool that is able to modify those files](https://github.com/wwylele/save3ds), which was the inspiration for this tool's ability to modify those files from the arm9
* Everyone in crc on the [Nintendo Homebrew Discord server](https://discord.gg/C29hYvh) who helped test this
