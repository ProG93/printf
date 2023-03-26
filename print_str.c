#include "main.h"

/**
 * print_s - prints a string to stdout
 * @args: va_list containing the string to be printed
 *
 * Return: number of characters printed
 */
int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}

	return (count);
}
