#include "main.h"

/**
 * print_binary - Prints an unsigned integer in binary format.
 * @args: The va_list containing the unsigned integer argument.
 * Return: The number of characters printed.
 */
int print_binary(va_list args)
{
	int count = 0;
	int binary[64];
	int i = 0, j;
	int N = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int pr;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; i < 32; i++)
	{
		pr = ((1 << (31 - i)) & num);
		if (pr >> (31 - i))
			N = 1;
		if (N)
		{
			binary[i] = pr >> (31 - i);
			count++;
		}
	}

	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	else
	{
		for (j = i - count; j < i; j++)
			_putchar(binary[j] + '0');
	}
	return (count);
}
