#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct Specifier_s - is a custom data type defined.
 * @sp: A pointer to a character.
 * @p: A function pointer that points to a function returning an integer.
*/
typedef struct Specifier_s
{
char *sp;
int (*p)();
}
Specifier_t;

int _printf(const char *format, ...);
int valid_precentage(const char *format, int *i);
int _putchar(char c);
int print_percent(void);
int print_unsigned_integer(unsigned int n);
int print_unsigned_octal(unsigned int n);
int print_string(va_list args);
int _strlen(char *s);
int printReversedString(va_list args);
int print_char(va_list args);
int print_integer(va_list args);
int print_decimal(va_list args);
int _puts(char *s);
int print_binary(va_list args);
void rev(char s[]);
void _itoa(long n, char s[]);


#endif
