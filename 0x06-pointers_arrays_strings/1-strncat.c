#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s_len = 0;
	int d_len = 0;

	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	while (src[s_len] != '\0' && s_len < n)
	{
		dest[d_len] = src[s_len];
		s_len++;
		d_len++;
	}

	dest[d_len] = '\0';

	return (dest);
}
