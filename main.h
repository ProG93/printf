#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/*
 * struct _printf_format - function that prints all formats
 * @specifier: printf specifier
 * @printf: print function pointer
 */

typedef struct _printf_format
{
	char specifier;
	int(*printf)(va_list arg);

}prt;
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(va_list arg);
int _putchar(char c);

#endif
