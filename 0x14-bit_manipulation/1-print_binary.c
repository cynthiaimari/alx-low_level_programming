#include "main.h"

/**
 * print_binary - converts the decimal format number into binary
 * @k: decimal number
 */
void print_binary(unsigned long int k)
{
	int temp;
	static int count;

	if (k == 0 && count > 0)
		return;
	else if (k == 0)
	{
		_putchar('0');
		return;
	}

	temp = (k & 1);
	count++;
	print_binary(k >>= 1);
	_putchar('0' + temp);
}
