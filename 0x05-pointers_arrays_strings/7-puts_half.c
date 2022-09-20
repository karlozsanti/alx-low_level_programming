#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - puts half to int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;
	int oE = 0;

	if (_strlen(Str) % 2 != 0)
	{
		oE += 1;
	}
	for (i = (_strlen(str) + oE / 2; i < _strlen(str); i++)
			{
			_putchar(str[i]);
			}
			_putchar('\n');
			}
