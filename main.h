#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>


/*
 * struct _printf_format - prints all formats
 * @specifier: printf specifier
 * @printf: print function pointer
 */

typedef struct _printf_format
{
	char *t;
	int (*f)(va_list);

} print_type;


int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list arg);
int print_s(va_list arg);
int print_i(va_list i);
int print_d(va_list d);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_S(va_list S);
int print_p(va_list p);
int (*get_sfunc(const char *format))(va_list);
int print_hex(unsigned int n, unsigned int c);
int hex_print(char c);
int print_r(va_list r);
int print_R(va_list R);

#endif
