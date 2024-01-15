#include "main.h"

/**
* _strncpy - function that displays copies of a string
*
* @dest: input parameter
*
* @src: input parameter
*
* @n: number of copies
*
* Return: dest (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
int x;

x = 0;
while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
