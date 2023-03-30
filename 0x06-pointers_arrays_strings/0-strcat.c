#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
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
