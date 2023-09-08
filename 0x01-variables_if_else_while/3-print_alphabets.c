#include <stdio>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(vooid)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (CH <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
