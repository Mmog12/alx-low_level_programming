#include "holberton.h"
/**
 * print_alphapet - prints the alpha in lowercase
 * Return: Always 0
 */

void print_alphapet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
