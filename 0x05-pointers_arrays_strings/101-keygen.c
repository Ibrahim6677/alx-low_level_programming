#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - genetats random passwords for 101-crackme
 * Return: zero
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(27272 - sun);
	return (0);
}
