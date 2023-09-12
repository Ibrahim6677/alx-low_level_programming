#include "main.h"

/**
 * print_alphabet - unilizes on the _putchar function to print
 *	thr alphabet a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putch(ch);
	_putchar('\n');
}
