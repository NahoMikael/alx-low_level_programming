#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x = x - 1; x >= 0; x--)
		_putchar(s[x--]);
	_putchar('\n');
}

