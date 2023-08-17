#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings followed by new line
 * @separator: string to be printed between the lines
 * @n: number of srtings to be passed in function
 * @...: variable number in function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list string;
	char *str;

	va_start(string, n);
	for (s = 0; s < n; s++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (s != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
