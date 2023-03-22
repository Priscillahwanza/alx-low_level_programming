#include "main.h"
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char p[] = "_putchar";

	for (c = 0; c < 9; c++)
	{
		_putchar(p[c]);
	}
	_putchar('\n');

	return (0);
}
