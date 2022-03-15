#include "main.h"
/**
 *print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');
}
