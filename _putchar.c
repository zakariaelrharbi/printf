#include "main.h"

/**
 * _putchar - writes the character c.
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * _puts - print string.
 * @s: string.
 * Return: the len of the str.
 */
int _puts(char *s)
{
int i = 0;

while (s[i])
{
_putchar(s[i]);
i++;
}
return (i);
}
