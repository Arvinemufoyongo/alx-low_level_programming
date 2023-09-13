#include "main.h"

/**
 * print_alphabet - function that prints alphabets in lowercase
 *
 * Retrn: always 0
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		_putchar(m);
	_putchar('\n');
}
