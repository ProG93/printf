#include "main.h"
/**
 * _printf - function that imitates printf
 * @format: format string
 *
 * Return: the numbers of character printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	int *fn;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (!format[i])
				return (-1);
			fn = 
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
