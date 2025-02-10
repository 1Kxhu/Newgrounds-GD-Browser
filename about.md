# Newgrounds GD Browser
This mod allows you to browse songs from newgrounds in-game, without leaving the game's window.

## Technical information  
We do NOT use a WebView, instead, we parse html code and create Cocos controls.
Any changes done to https://www.newgrounds.com/audio html structure can render this mod useless.
In result, this mod's code itself is a little bit messy.

ps. Basically, if the Newgrounds search results page's layout changes, this code will not work.

Big thanks to SMJS for pointing out many issues with my code and providing help