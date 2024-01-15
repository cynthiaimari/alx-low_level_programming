#include "main.h"
/**
* _memset - a function that fill memory
* with a constant byte
*
* @s: input memory to char type
* @b: input variable of char type represents the character to fill
* @n: number of bytes to be filled
*
* Return: a pointer with values in bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
