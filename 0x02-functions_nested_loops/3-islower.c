#include "main.h"

/**
 * _islower - Check description
 * @c: An input character
 * Description: Returns 1 if c is lowercase else eturns 0
 * Return: Nothing.
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == c)
	{
	lower = i;
	break;
	}

}
