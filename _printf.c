#include "main.h"

/**
 * _printf - prints output according to a format string
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*handler)(va_list);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			handler = check_specifier(format);
			if (handler == NULL)
			{
				_putchar('%');
				_putchar(*format++);
				count += 2;
			}
			else
			{
				count += handler(args);
				format++;
			}
			format++;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
