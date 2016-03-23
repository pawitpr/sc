### Mirror of the sc Spreadsheet Calculator source
`sc` is a free curses-based spreadsheet program that uses key bindings similar to vi and less.
This is a mirror of the latest source code which can be found at
[http://www.ibiblio.org/pub/Linux/apps/financial/spreadsheet/sc-7.16.tar.gz](http://www.ibiblio.org/pub/Linux/apps/financial/spreadsheet/sc-7.16.tar.gz).
For more information on `sc`please see the
[`README`](https://github.com/n-t-roff/sc/blob/master/README)
file.

This source code repository is based on the latest `sc` version 7.16 from September 2002.
No functional modifications are done but the following changes had been made:
* Found bugs are fixed
* Most `-Wall` compiler warnings fixed
* Most uses of `sprintf`, `strcpy`, and `strcat` replaced
  with `snprintf`, `strlcpy`, and `strlcat`
* `./configure` script added and tested on NetBSD, OpenBSD, FreeBSD, and Linux

#### Getting the source
The source can be cloned with
```sh
git clone https://github.com/n-t-roff/sc.git
```
and updated with
```sh
git pull
```
#### Compiling and Installation
Defaults for compiling and installation are set in the
[`Makefile.in`](https://github.com/n-t-roff/sc/blob/master/Makefile.in).
A system dependent makefile is generated with
```sh
./configure
```
The source is compiled with
```sh
make
```
(the `curses` or `ncurses` header files need to be installed,
else `make` failes).
The result is installed with
```sh
make install
```
to the base directory `/usr/local`.
This path can be changed in the
[`Makefile.in`](https://github.com/n-t-roff/sc/blob/master/Makefile.in).
All generated files are removed with
```sh
make distclean
```
The package can be uninstalled with
```sh
make uninstall
```
