#include <unistd.h>

/**
 * main - Entry point
 *
 * Cescription: print a qoute using write function
 *    ssize_t write(int fd.const void *buf,size_t count);
 *
 * Return: 1 (error).
 */

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	weite(1, quo, 59);
	return (1);
}
