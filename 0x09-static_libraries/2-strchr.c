#include "main.h"

/**
* *_strchr - fills memory with a constant byte
* @s: pointer to put the constant
* @c: constant
* Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int v;

	for (v = 0; s[v] >= '\0' ; v++)
	{
		if (s[v] == c)
		{
			return (s + v);
		}
	}
	return ('\0');
}
