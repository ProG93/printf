#include "main.h"

/**
  * get_sfunc - finds function pointer
  * @c: specifier
  * Return: pointer
  */
prt func[] = {
	{'c', print_char},
	{'s', print_str},
	{'%', print_percent},
	{'\0', NULL},
};
