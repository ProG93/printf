#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int _putchar(char c);

#endif
