#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);


int valid_precentage(const char *format, int *i);
int _putchar(char c);
int print_percent(void);
int print_string(char *str);
<<<<<<< HEAD
=======
int print_unsigned_integer(unsigned int n);
int print_unsigned_octal(unsigned int n);
>>>>>>> 180b6df29f7f420ec6da1e5bedfed869f09db362
int _strlen(char *s);











#endif
