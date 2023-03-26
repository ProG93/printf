#include "main.h"
/**
 * _printf - function that imitates printf
 * @format: format string
 *
 * Return: the numbers of character printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;
	prt *fn;
	fn = func;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format++);
			count++;
		}
		else
		{
			format++;
			while (fn[0].specifier && fn[0].specifier != *format)
				fn++; 
			if (fn[0].fn == NULL)
			{
				_putchar('%');
				_putchar(*format++);
				count += 2;
			}
			else
			{
				count += fn[0].fn(arg);
				format++;
			}
		}
	}
	va_end(arg);
	return (count);
}
