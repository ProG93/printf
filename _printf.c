#include "_printf.h"
#include <stdio.h>
#include <stdarg.h>

int _printf_char(va_list arg);
int _printf_str(va_list arg);
int _printf(const char *format, ...);

/**
  *_printf_char - prints a char
  *@arg: argument that points to character to be printed
  *Description: argument of a char
  *Return: char
  */
int _printf_char(va_list arg)
{
	char let;

	let = va_arg(arg, int);
	printf("%c", let);
}

/**
  *_printf_str - prints a string
  *@arg: argument that points to string to be printed
  *Description: argument of a string
  *Return: string
  */
int _printf_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		return (NULL);
	printf("%s", str);
}

/**
  *_printf - function that produce output
  *@format: string representing argument types
  *@...: number of arguments to be printed
  *Description: argument of char and str
  *Return: output
  */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator;
	_printf_t funcs[] = {
		{"c", _printf_char},
		{"s", _printf_str}
	};
	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].specifier)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].printf(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
