#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		putchar(p + '0');
	}
	putchar('\n');

	return (0);
}
