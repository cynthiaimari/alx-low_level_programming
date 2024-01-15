#include "main.h"

/**
* _strncat - a function that concatenate two strings using a most
* n bytes from src
*
* @dest: input parameter
*
* @src: input parameter
*
* @n: input parameter for number of bytes
*
* Return: dest (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
int ch;
int x;

ch = 0;
while (dest[ch] != '\0')
{
ch++;
}
x = 0;
while (x < n && src[x] != '\0')
{
dest[ch] = src[x];
ch++;
x++;
}
dest[ch] = '\0';
return (dest);
}
