#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') ||
	    (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
