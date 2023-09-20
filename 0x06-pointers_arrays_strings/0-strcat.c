#include "main.h"

/**
 * _strcat - function that concatenares
 *		two string
 *
 * @dest: pointer to destantion input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_srecat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);
}
