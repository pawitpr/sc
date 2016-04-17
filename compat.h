/* 2016, Carsten Kunze */

/* Don't use #inlcude in header files! ;) */
#if defined HAVE_NCURSESW_CURSES_H
# include <ncursesw/curses.h>
#elif defined HAVE_NCURSES_CURSES_H
# include <ncurses/curses.h>
#else
# include <curses.h>
# ifndef false
#  define false 0
# endif
# ifndef true
#  define true (!false)
# endif
#endif
#define _COMPAT_H

#ifndef HAVE_STRLCPY
size_t
strlcpy(char *, const char *, size_t);
#endif

#ifndef HAVE_STRLCAT
size_t
strlcat(char *, const char *, size_t);
#endif
