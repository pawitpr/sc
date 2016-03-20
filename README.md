### Mirror of the sc Spreadsheet Calculator source
`sc` is a free curses-based spreadsheet program that uses key bindings similar to vi and less.
This is a mirror of the latest source code which can be found at
[http://www.ibiblio.org/pub/Linux/apps/financial/spreadsheet/sc-7.16.tar.gz](http://www.ibiblio.org/pub/Linux/apps/financial/spreadsheet/sc-7.16.tar.gz).
For more information please see the package
[README](https://github.com/n-t-roff/sc/blob/master/README)
file.
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
[`Makefile`](https://github.com/n-t-roff/sc/blob/master/Makefile).
All generated files are removed with
```sh
make distclean
```
The package can be uninstalled with
```sh
make uninstall
```
