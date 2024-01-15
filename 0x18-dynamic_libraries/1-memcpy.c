#include "main.h"
/**
* _memcpy - a function that copies memory area in a pointer
*
* @dest: buffer where we will copy the area to
* @src: the area we are to copy
* @n: number of bytes
*
* Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
