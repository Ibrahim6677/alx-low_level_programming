#include "main.h"

/**
 * print_number - Print an integer
 *
 * @n: The integer to be printed
*/

void print_number(int n)
{
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*Print the first few doigit*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*Print the last digit*/
	_putchar((num % 10) + 48);
}
