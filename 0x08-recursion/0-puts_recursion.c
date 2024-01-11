#include "main.h"
/**
 * _puts_recursion - Prints a string.
 * @s: The string to be printed.
 */
int _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		_putchar('\n');
		return(0);
}
