#include "main.h"
/**
 * main - entry point function to the program
 *
 * Description: This program will print
 * putchar to console without using stdio.h file
 * Return: Return 0 on successful exe or else !0
 */
int main(void)
{
	char *wrd = "_putchar";
	int i;

	for (i = 0; wrd[i] != '\0'; i++)
	{
	_putchar(wrd[i]);
	}
	_putchar('\n');
	return (0);
}
