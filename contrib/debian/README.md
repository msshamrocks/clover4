
Debian
====================
This directory contains files used to package cloverd/clover-qt
for Debian-based Linux systems. If you compile cloverd/clover-qt yourself, there are some useful files here.

## clover: URI support ##


clover-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install clover-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cloverqt binary to `/usr/bin`
and the `../../share/pixmaps/clover128.png` to `/usr/share/pixmaps`

clover-qt.protocol (KDE)

