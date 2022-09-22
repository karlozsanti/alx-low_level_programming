#include "main.h"

/**
 * rot13 - encrypts code
 * @x: string to encrypt
 * Return: char value
 */
char *rot13(char *x)
{
	char part1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char part2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j = 0;

	for (i = 0; x[i] != '\0'; i++)
	{

		for (j = 0; part1[j] != '\0'; j++)
		{
			if (x[i] == part1[j])
			{
				x[i] = part2[j];
				break;
			}
		}
	}
	return (x);
}
