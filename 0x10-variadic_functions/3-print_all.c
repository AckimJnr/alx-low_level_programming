#include <stdarg.h>
#include <stdio.h>
#include <strings.h>
/**
 * print_all - prints every argument passed to the function
 * @format: order in which parameters will be passed
 *
 * Return: Returns void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s_val;
	int i_val;
	char c_val;
	double f_val;
	int format_id = 0;

	va_start(ap, format);

	while (format && format[format_id])
	{
		switch (format[format_id])
		{
			case 'c':
				c_val = (char) va_arg(ap, int);
				printf("%c", c_val);
				break;
			case 'i':
				i_val = va_arg(ap, int);
				printf("%d", i_val);
				break;
			case 'f':
				f_val = va_arg(ap, double);
				printf("%f", f_val);
				break;
			case 's':
				s_val = va_arg(ap, char *);
				if (s_val == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s_val);
				}
				break;
			default:
				break;
		}
		if (format[format_id + 1] != '\0' &&
				(format[format_id] == 'c'
				|| format[format_id] == 'i'
				|| format[format_id] == 'f'
				|| format[format_id] == 's'))
		{
			printf(", ");
		}
		format_id++;
	}

	va_end(ap);
	putchar('\n');
}
