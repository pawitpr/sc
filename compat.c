/* 2016, Carsten Kunze */

#include <string.h>

#ifndef HAVE_STRLCPY
size_t
strlcpy(char *dst, const char *src, size_t dstsize) {
	size_t l;
	l = strlen(src);
	strcpy(dst, src);
	return l;
}
#endif

#ifndef HAVE_STRLCAT
size_t
strlcat(char *dst, const char *src, size_t dstsize) {
	size_t l;
	l = strlen(dst);
	l += strlen(src);
	strcat(dst, src);
	return l;
}
#endif
