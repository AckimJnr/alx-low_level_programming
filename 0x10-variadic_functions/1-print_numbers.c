#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: char to seperate the printed numbers if seperator == NULL dont
 * print it
 * @n: number of number to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%ld", va_arg(list, long int));

		if (separator != NULL && i != n - 1)
			printf("%s ", separator);
	}
	putchar('\n');
	va_end(list);
}
