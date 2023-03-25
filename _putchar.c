#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character to be printed
 *
 * Return: 1 for success
 * On error, -1, is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
