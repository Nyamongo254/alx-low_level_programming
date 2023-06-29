#include "main.h"
/**
 * _strncpy - copy a string
 * from string src into dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: maximum number of bytes to be copied from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
