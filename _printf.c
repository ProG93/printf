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

	prt func[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'\0', NULL},

	};

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
			prt *printf = func;
			while (printf[0].specifier && printf[0].specifier != *format)
				printf++;
			if (printf[0].printf == NULL)
			{
				_putchar('%');
				_putchar(*format++);
				count += 2;
			}
			else
			{
				count += printf[0].printf(arg);
				format++;
			}
		}
	}
	va_end(arg);
	return (count);
}
