#include "main.h"

/**
 * print_alphabet _ Check description
 * Description: It prints the alphabet in a lowercase with a line
 * Return: nothing.
 */
void print_alphabet(void)
/* start of function */
{
        char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
