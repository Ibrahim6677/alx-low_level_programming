#include "main.h"

/**
* *_strpbrk -  searches a string for any of a set of bytes.
* @s: string
* @accept: string to match
* Return: pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int h, k;
	char *p;

	h = 0;
	while (s[h] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[h])
			{
				p = &s[h];
				return (p);
			}
			k++;
		}
		h++;
	}
	return (0);
}
