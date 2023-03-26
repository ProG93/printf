#include "main.h"

/**
 * check_specifier - finds function pointer for given specifier
 * @format: format string containing conversion specifier
 *
 * Return: pointer to function that handles the conversion specifier
 */
int (*check_specifier(const char *format))(va_list args)
{
	unsigned int i;
	struct specifier {
		char specifier;
		int (*handler)(va_list);
	} specs[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'\0', NULL},

	};

	for (i = 0; specs[i].specifier != '\0'; i++)
	{
		if (specs[i].specifier == *format)
			return (specs[i].handler);
	}
	return (NULL);
}
