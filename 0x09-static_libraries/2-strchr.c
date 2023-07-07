#include "main.h"
/**
 * _strchr - Entry point
 * @s: a pointer to the string in which to search the character
 * @c: the character to locate within the string
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
