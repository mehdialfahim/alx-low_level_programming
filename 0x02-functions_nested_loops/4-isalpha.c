#include "main.h"

/**
 * _isalpha - check if char is alphabetic character
 * @c: is the char to be checked
 * Return: 1 if char is alphabetic, otherwise 0.
 */

int isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
		return (1);
	else
		return (0);
}
