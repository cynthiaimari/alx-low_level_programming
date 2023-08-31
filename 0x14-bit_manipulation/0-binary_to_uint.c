#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * @f: points to a string of 0's and 1's
 * Return: decimal format of the binary
 */
unsigned int binary_to_uint(const char *f)
{
	unsigned int dec = 0; /* dec is the variable to hold the decimal format */

	if (f == NULL)
		return (0);

	while (*f)
	{
		if (*f == '1')
			dec = (dec << 1) | 1;
		else if (*f == '0')
			dec <<= 1;
		else
			return (0);
		f++;
	}

	return (dec);
}
