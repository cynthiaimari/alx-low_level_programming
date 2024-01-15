#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *
 * @dest: copy to
 *
 * @src: copy form
 *
 * Return: return string
 */

char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int k = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; k < h; k++)
	{
		dest[k] = src[k];
	}
	dest[h] = '\0';
	return (dest);
}
