# Newgrounds GD Browser
This mod allows you to browse songs from newgrounds in-game, without leaving the game's window.

> [!WARNING]  
> We do NOT use a WebView, instead, we parse html code and create Cocos controls.
> Any changes done to https://www.newgrounds.com/audio html structure can render this mod useless.
> In result, this mod's code itself is a little bit messy.

> ps. Basically, if the Newgrounds search results page's layout changes, this code will not work.

<img src="logo.png" width="150" alt="the mod's logo" />

## Screenshots
Notice the added button with a web icon to the left of the Newgrounds button.
![image](https://github.com/user-attachments/assets/c6ff61c3-3f71-4dc3-ad7f-db5cf64e030a)
This menu appears upon clickin the web graphic button.
It allows you to search for newgrounds songs, by title.
![image](https://github.com/user-attachments/assets/3473ee64-d05e-4cb6-ab99-65d80d8f56c3)
Here's another screenshot of the menu, this time I'd searched for songs made by the artist 'femtanyl'
![image](https://github.com/user-attachments/assets/3614d2d8-9241-4f5a-9188-7f6d28745fd8)
If there are internet issues, or the request overall fails, this dialog will be shown.
![image](https://github.com/user-attachments/assets/be2904e1-5257-490a-9ed2-15b94cd0cc41)
If there are no songs that match your search query, this dialog will be shown.
![image](https://github.com/user-attachments/assets/ccc78f95-3ec6-45c2-9480-12ba821a5aae)

# Geode-generated (ignore unless you are a developer)

## Getting started
We recommend heading over to [the getting started section on Geode SDK docs](https://docs.geode-sdk.org/getting-started/) for useful info on what to do next.

## Build instructions
For more info, see [Geode SDK docs](https://docs.geode-sdk.org/getting-started/create-mod#build)
```sh
# Assuming you have the Geode CLI set up already
geode build
```

# Resources
* [Geode SDK Documentation](https://docs.geode-sdk.org/)
* [Geode SDK Source Code](https://github.com/geode-sdk/geode/)
* [Geode CLI](https://github.com/geode-sdk/cli)
* [Bindings](https://github.com/geode-sdk/bindings/)
* [Dev Tools](https://github.com/geode-sdk/DevTools)
