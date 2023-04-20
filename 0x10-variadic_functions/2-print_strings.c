#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: seperator for strings
 * @n: number of string to be printed
 *
 * Return: Returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
