#include "main.h"
/**
 * _strspn - Entry point
 * @s: A pointer to the string in which to search for the prefix substring.
 * @accept: A pointer to the string containing the bytes that are considered valid in the prefix substring.
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
