#include <uinstd.h>

/**
 * _putchar - this writes the character c to stdout
 * @c: The character to print
 *
 * Return: )n success 1.
 * On error, -1 is returned, anderror is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
