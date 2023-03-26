#include "main.h"

/**
  *get_sfunc - finds function pointer
  *@c: specifier
  *Return: pointer
  */

int (*get_sfunc(const char c))(va_list)
{
	unsigned int n = 0;

	prt func[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_integer},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_oct},
		{'x', print_x},
		{'X', print_X},
		{'S', print_S},
		{'R', print_rot13},
		{'r', print_r}
	};
	for (; func[n].specifier; n++)
	{
		if (c == func[n].specifier)
			return (func[n].fn);
	}
	return (NULL);
}
