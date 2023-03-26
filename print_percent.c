#include "main.h"

/**
 * print_percent - prints a percent sign to stdout
 * @args: unused va_list
 *
 * Return: number of characters printed (always 1)
 */
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
