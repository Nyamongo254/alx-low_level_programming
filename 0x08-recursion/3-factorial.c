#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to return the factorial from
 * return: the factorial of n
 */

unsigned long long int factorial(unsigned int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
