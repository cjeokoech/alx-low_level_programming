#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns all its sum parameters
 * @n: number of parameters
 * @...: variable number of variable
 * Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
