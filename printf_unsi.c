#include "main.h"
/**
 * print_unsigned_integer - function that print unsigned int.
 * @n: the unsigned int.
 * Return: return the i number.
*/
int print_unsigned_integer(unsigned int n)
{
	int i;

	i = 0;
	if (n <= 9)
		i = i + _putchar(n + 48);
	else
	{
		i = i + print_unsigned_integer(n / 10);
		i = i + _putchar(n % 10 + 48);
	}
	return (i);
}
/**
 * print_unsigned_octal - function that print unsigned octal.
 * @n: the unsigned int.
 * Return: the i number.
*/
int print_unsigned_octal(unsigned int n)
{
	int i;

	i = 0;
	if (n > 7)
		i = print_unsigned_octal(n / 8);

	i = i + _putchar(n % 8 + 48);
	return (i);
}
