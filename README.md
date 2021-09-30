# NoviLinux

This is my implementation of the suckless tools.
I use it on Arch and it should work on other Linux Distributions as well as on BSD and Solaris.

## Preparation

You need to have a System that runs the X11 Desktop and also some tools to compile.

- git
- make

For the Surf browser, you need:

- gcr 
- webkitgtk2

## Installation

Clone this repository and use make to install it.

```bash
git clone https://github.com/Vadime/novios.git
cd novios
sudo make clean install
```

To install the surf browser:

```bash
cd src/surf
sudo make clean install
```

All of the binaries will be installed in novios/bin and /usr/bin.

## TODO

### DWM:
    - togglefloating when window already floats
    - rounded corners
    - statusbar
    - volumekeybindings
    - resize window in middle and not from left bottom
    - clean up code base
    - notifications (volumechnaged)
	- bigger, thiker font (not monospaced)
	- make custom statusbar with information about (volume, time, unread emails, bandwith, pacman updates, battery life)
	- rounded corners
	- mouse disable window (toggle floating, resize, translate), enable keyboard resize and translate
	- code cleanup, but first changing make file

### ST:
    - stop flikering when resized
    - more convinient keybindings
	- bigger, thiker font (not monospaced) by default
	- enable scroll
    - slight padding
	- dont show weird text when pushing wrong combinations
### DMENU:
    - implement with dwm
	- bigger, thiker font (not monospaced)
   	- middle of screen

### SURF:
    - add bookmarks
    - better navigation

### HERBE: 
	- integrate herbe into dwm
	- show when (volume chnaged, pacman updated, email comes)
