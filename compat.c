/* 2016, Carsten Kunze */

#include <string.h>

#ifndef HAVE_STRLCPY
size_t
strlcpy(char *dst, const char *src, size_t dstsize) {
	size_t srcsize;
	srcsize = strlen(src);
	if (dstsize > srcsize)
		dstsize = srcsize;
	else
		dstsize--;
	/* assumes non-overlapping buffers */
	memcpy(dst, src, dstsize);
	dst[dstsize] = 0;
	return srcsize;
}
#endif

#ifndef HAVE_STRLCAT
size_t
strlcat(char *dst, const char *src, size_t dstsize) {
	size_t ld, ls;
	ld = strlen(dst);
	dst += ld;
	dstsize -= ld;
	ls = strlen(src);
	if (dstsize > ls)
		dstsize = ls;
	else
		dstsize--;
	memcpy(dst, src, dstsize);
	dst[dstsize] = 0;
	return ld + ls;
}
#endif
