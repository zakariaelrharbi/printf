#include <stdio.h>
#include "main.h"

int main(void)
{
	int len_1 = 0, len_2 = 0;

	len_1 = printf("Expected output:    %d\n", 0);
	len_2 = _printf("Current output:     %d\n", 0);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %d\n", 1);
	len_2 = _printf("Current output:     %d\n", 1);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %d\n", -1);
	len_2 = _printf("Current output:     %d\n", -1);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %d\n", 2147483647);
	len_2 = _printf("Current output:     %d\n", 2147483647);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %d\n", (int)-2147483648);
	len_2 = _printf("Current output:     %d\n", -2147483648);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %i\n", 100);
	len_2 = _printf("Current output:     %i\n", 100);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %i\n", -999);
	len_2 = _printf("Current output:     %i\n", -999);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	return (0);
}
