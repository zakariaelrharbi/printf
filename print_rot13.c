#include "main.h"

/**
 * print_rot13 - Prints a rot13'ed string.
 * @args: A va_list containing the variable argument list.
 * Return: The number of characters printed.
 */
int print_rot13(va_list args)
{
	char *str = va_arg(args, char*);
	int i, j, count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (str[i] == in[j])
			{
				_putchar(out[j]);
				count++;
				break;
			}
		}
		if (in[j] == '\0')
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
