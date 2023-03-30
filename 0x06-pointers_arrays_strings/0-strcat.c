#include "main.h"
/**
 * _strcat - concatenates two strings
 * This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int s_len = 0;
	int d_len = 0;

	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	while (src[s_len] != '\0')
	{
		dest[d_len] = src[s_len];
		s_len++;
		d_len++;
	}

	dest[d_len] = '\0';

	return (dest);
}
