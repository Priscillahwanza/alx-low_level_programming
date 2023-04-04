#include "main.h"
/**
 * _memset() - fill first n bytes of the memory
 * area pointed to by s
 * with constant type b
 *
 * Return a pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}


