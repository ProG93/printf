#ifndef _PRINTF_H
#define _PRINTF_H

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
	void(*printf)(va_list arg);

	}_printf_t;

#endif
