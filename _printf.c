#include "main.h"

/**
 * _printf - prints output according to a format string
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	int (*ptr)(va_list);
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);

		ptr = get_sfunc(&format[i + 1]);
		if (ptr != NULL)
		{
			count += ptr(arg);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;

			else
				i++;
	}
	va_end(arg);
	return (count);
}
