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
	int (*ptr)(va_list);
	va_list arg;
	void get_sfunc();

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
			ptr = get_sfunc(format[i]); 
			if (ptr == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else
			{
				count += ptr(arg);
			}
		}
	}
	va_end(arg);
	return (count);
}
