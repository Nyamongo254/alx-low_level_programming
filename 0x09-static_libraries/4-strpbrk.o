#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: A pointer to the string in which to search for the matching byte.
 * @accept: A pointer to the string containing the bytes to search for.
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)

{
	int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
