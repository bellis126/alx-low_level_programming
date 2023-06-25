#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)

{

	char ch;

	int s;

	s = 0;

	while (s < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		s++;
	}

}
