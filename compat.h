/* 2016, Carsten Kunze */

/* Don't use #inlcude in header files! ;) */
#if defined HAVE_NCURSESW_CURSES_H
# include <ncursesw/curses.h>
#else
# include <curses.h>
#endif

#ifndef HAVE_STRLCPY
size_t
strlcpy(char *, const char *, size_t);
#endif

#ifndef HAVE_STRLCAT
size_t
strlcat(char *, const char *, size_t);
#endif
