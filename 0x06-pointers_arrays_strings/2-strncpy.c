#include "main.h"
/**
 * _strncpy - copies a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}
	dest[s] = '\0';
	return (dest);
}
