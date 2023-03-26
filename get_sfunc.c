#include "main.h"
#include <stddef.h>

/**
 * get_sfunc - finds function pointer for given specifier
 * @format: format string containing conversion specifier
 *
 * Return: pointer to function that handles the conversion specifier
 */
int (*get_sfunc(const char *format))(va_list args)
{
	unsigned int i;

	print_type p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"S", print_S},
		{"p", print_p},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}

	};

	for (i = 0; p[i].t != '\0'; i++)
	{
		if (*(p[i].t == *format)
			break;
	}
	return (p[i].f);
}
