#include "main.h"

/**
 * leet - a leet function
 * @x: parameter x
 * Return: a string
 */
char *leet(char *x)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int n;
	int m;

	for (n = 0; x[n] != '\0'; n++)
	{
		for (m = 0; alphaArr[m] != '\0'; m++)
		{
			if (x[n] == alphaArr[m])
			{
				x[n] = alphaArr[m + 1];
				break;
			}
		}
	}
	return (x);
}
