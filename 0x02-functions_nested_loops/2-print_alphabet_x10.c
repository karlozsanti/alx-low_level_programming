#include "main.h"

/**
 * print_alphabet_x10 -> prints lowercase alphabet
 *
 */
void print_alphabet_x10(void)
{
	char k;
	char j;

	for (j = 0; j < 10; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
