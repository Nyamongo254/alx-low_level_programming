#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: pointer to the string in which to search for the substring
 * @needle: pointer to the substring to search for
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')

	{
	char *h = haystack;
	char *n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}

	return (0);
}
