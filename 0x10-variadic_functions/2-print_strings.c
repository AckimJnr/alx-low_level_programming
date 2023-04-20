#include <stdarg.h>
#include <stdio.h>

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

		printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
