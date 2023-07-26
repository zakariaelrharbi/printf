#include "main.h"

/**
 * print_decimal - Prints a decimal integer.
 * @args: The va_list containing the decimal integer argument.
 * Return: The number of characters printed.
 */

int print_decimal(va_list args)
{
        int num = va_arg(args, int);
        int count = 0;
        int div = 1;
        int temp = num;
        int digit;

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

        while (temp != 0)
        {
                temp /= 10;
                div *= 10;
        }

        while (div > 1)
        {
                div /= 10;
                digit = num / div;
                _putchar(digit + '0');
                count++;
                num %= div;
        }

        return (count);
}
