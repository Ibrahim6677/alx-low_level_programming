#include "main.h"

/**
 * puts_half - print second helf of a string
 * @str: char array string type
 * Description: If add number of char, print (length - 1]
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}