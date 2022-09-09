#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char zeus = 'z';

	for (zeus = 'z'; zeus >= 'a'; zeus--)
		putchar(zeus);

	putchar('\n');

	return (0);
}
