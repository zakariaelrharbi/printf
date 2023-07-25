#include "main.h"

/**
 * print_integer - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */

int print_int(va_list list)
{
	int num = va_arg(list, long);
	char buf[50];

	_itoa(num, buf);
	return(puts(buf));
}

void rev(char s[])
{
	unsigned int i, len;
	char temp;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

void _itoa(long n, char s[])
{
	long sgn = n;
	unsigned int i = 0;

	if (sgn > 0)
		n = -n;
	
	do {
		s[i++] = n% 10 + '0';
	} while ((n /= 10) > 0);
	if (sgn < 0)
		s[i++] = '-';
	s[i] = '\0';
	rev(s);
}

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int digit, div = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (num / div >= 10)
		div *= 10;

	while (div > 0)
	{
		digit = num / div;
		_putchar(digit + '0');
		count++;
		num %= div;
		div /= 10;
	}

	return (count);
}
