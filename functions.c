#include "main.h"
/**
 * print_unsigned_integer - function that print unsigned int.
 * @n: the unsigned int.
 * return: return the count number
*/
int print_unsigned_integer(unsigned int n)
{
	int count;

	count = 0;
	if (n <= 9)
		count = count + _putchar(n + '0');
	else
	{
		count = count + print_unsigned_integer(n / 10);
		count = count + _putchar(n % 10 + '0');
	}
	return (count);
}
/**
 * print_unsigned_octal - function that print unsigned octal.
 * @n: the unsigned int.
 * return: the count number.
*/
int print_unsigned_octal(unsigned int n)
{
	int count;

	count = 0;
	if (n > 7)
		count = print_unsigned_octal(n / 8);

	count = count + _putchar(n % 8 + 48);
	return (count);
}
