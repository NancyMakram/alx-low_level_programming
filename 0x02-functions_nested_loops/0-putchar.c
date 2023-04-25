<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
putchar('\n');
return (0);
=======
#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char abe[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(abe[c]);
	}
	_putchar('\n');
	return (0);
>>>>>>> 6c6fce8f2c04c34ec201a4b0ea1ed852ca222d7d
}
