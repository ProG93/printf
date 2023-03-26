#include "main.h"

/**
 * _printf - prints output according to a format string
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	unsigned int i = 0, count = 0;
	int (*ptr)(va_list);
	va_list arg;
=======
	int count = 0;
	va_list args;
	int (*handler)(va_list);
>>>>>>> b8872c9b4c10b5e06b73c4ca050e27a8145f1dbd

	if (format == NULL)
		return (-1);

<<<<<<< HEAD
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
=======
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
>>>>>>> b8872c9b4c10b5e06b73c4ca050e27a8145f1dbd
		}
		if (!format[i + 1] == '%')
			return (-1);
			_putchar(format[i]);
			count++
			i += 2;

			else
				i++;
	}
	va_end(args);
	return (count);
}
