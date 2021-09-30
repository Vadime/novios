#NoviLinux

This is my implementation of the suckless tools.
I use it on Arch and it should work on other Linux Distributions as well as on BSD and Solaris.

##Preparation
You need to have a System that runs the X11 Desktop.

##Installation
Clone this repository and use "Make" to install the binaries on your system.
Change Directory to all of the Subdirectories.
In each of them run: sudo make clean install

##TODO
DWM:
    togglefloating when window already floats
    rounded corners
    statusbar
    volumekeybindings
    resize window in middle and not from left bottom
    clean up code base
    notifications (volumechnaged)
D	bigger, thiker font (not monospaced)
	make custom statusbar with information about (volume, time, unread emails, bandwith, pacman updates, battery life)
	rounded corners
	mouse disable window (toggle floating, resize, translate), enable keyboard resize and translate
	code cleanup, but first changing make file
ST:
    stop flikering when resized
    more convinient keybindings
D	bigger, thiker font (not monospaced) by default
D	enable scroll
D	slight padding
	dont show weird text when pushing wrong combinations
DMENU:
    implement with dwm
D	bigger, thiker font (not monospaced)
D	middle of screen
HERBE: 
	integrate herbe into dwm
	show when (volume chnaged, pacman updated, email comes)
