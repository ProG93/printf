#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>


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
=======
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
>>>>>>> b8872c9b4c10b5e06b73c4ca050e27a8145f1dbd
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
