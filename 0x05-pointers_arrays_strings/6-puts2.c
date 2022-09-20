#include "main.h"
#include <string.h>

/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
