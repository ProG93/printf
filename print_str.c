#include "main.h"

/**
 * print_str - prints a string to stdout
 * @args: va_list containing the string to be printed
 *
 * Return: number of characters printed
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
