#include "main.h"

/**
 * print_c - prints a character to stdout
 * @args: va_list containing the character to be printed
 *
 * Return: number of characters printed (always 1)
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
