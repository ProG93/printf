#include "main.h"

/**
  * get_sfunc - finds function pointer
  * @c: specifier
  * Return: pointer
  */
int (*check_specifier(const char *format))(va_list args)
{
	unsigned int i;
	prt func[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'\0', NULL},
	};
	for (i = 0; !(func[i].specifier); i++)
	{
		if ((func[i].specifier) == *format)
			break;
	}

	return (func[i].fn);	
}
