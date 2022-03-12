#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		putchar(p);
		p++;
	}
	putchar('\n');

	return (0);
}
