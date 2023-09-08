#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *		combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int firstDigit = 0, seconDigitt;

	while (firstDigit <= 99)
	{
		seconDigitt = firstDigit;

		while (seconDigitt <= 99)
		{
			if (seconDigitt != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigitt / 10) + 48);
				putchar((seconDigitt / 10) + 48);

				if (firstDigit != 98 || seconDigitt != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDigitt++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
