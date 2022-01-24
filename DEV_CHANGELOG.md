This is the changelog for the current development commit of the game. For the changelog for the public versions please check the Wiki!

# v2.1.1 (25/01/2022):
### Additions:
- Added a new extra move, rolling from Super Mario Odyssey!
- [Added partial support for MacOS](https://github.com/MorsGames/sm64plus/pull/51) thanks to [IlFalco1992](https://github.com/IlFalco1992). Please note that at the moment there are no guides for manually building the game for MacOS, and the support for MacOS won't be officially maintained after the release of this version. If the support breaks at some point you're feel free to make your own PR to help fix the issue.

### Changes:
- Custom textures are now enabled by default.

### Fixes:
- Fixed the custom textures not working properly.
- Fixed the encore mode color changes not working. This reverts the behavior of the encore mode back to how it worked in earlier versions of the game if custom textures are disabled.
- Fixed a minor visual issue with the "Invert Horizontal Camera Controls" and "Invert Vertical Camera Controls" settings in the launcher.


# v2.1.1 (25/01/2022) (Installer):

### Changes:
- Custom textures are now enabled by default. You can disable them the same way you'd enable them before.
- Made many small technical changes overall to make the installer work better under Linux. Please note that the Linux version of the launcher is still under development and there is no public release yet.
### Installer:
- Changed the installer visuals slightly.
- Added more options to the uninstaller.
- Made the uninstaller only delete the game files and not the entire folder the game is contained in.