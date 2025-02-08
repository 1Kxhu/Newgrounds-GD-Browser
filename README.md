# Newgrounds GD Browser
This mod allows you to browse songs from newgrounds in-game, without leaving the game's window.

> [!WARNING]  
> We do NOT use a WebView. Instead, we parse html code and create Cocos controls.
> Any changes done to https://www.newgrounds.com/audio html structure can render this mod useless.
> In result, this mod's code itself is a little bit messy.

> ps. Basically, if the Newgrounds search results page's layout changes, this code will not work.

<img src="logo.png" width="150" alt="the mod's logo" />

## Screenshots
Notice the added button with a web icon to the left of the Newgrounds button.
![image](https://github.com/user-attachments/assets/c6ff61c3-3f71-4dc3-ad7f-db5cf64e030a)
This menu appears upon clickin the web graphic button.
It allows you to search for newgrounds songs, by title.
![image](https://github.com/user-attachments/assets/f639cf6e-658c-4ece-8251-53dc4d4d3c83)
Here's another screenshot of the menu, this time I'd searched for songs made by the artist 'femtanyl'
![image](https://github.com/user-attachments/assets/be4009d1-28c9-4184-acd1-3709b24e96d0)
If there are internet issues, or the request overall fails, this dialog will be shown.
![image](https://github.com/user-attachments/assets/5547723d-52fb-4e8b-bcb7-2d9511d60a1b)
If there are no songs that match your search query, this dialog will be shown.
![image](https://github.com/user-attachments/assets/ea73afe8-7db2-4939-9b09-df65c2b4b4d0)

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
