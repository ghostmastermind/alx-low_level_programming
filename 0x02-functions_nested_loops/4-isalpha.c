#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	char i;
	int lower = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
	if (i == c)
	{
	lower = 1;
	break;
	}
	}
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		lower = 1;
		break;
		}
	}
return (lower);
}
