#include <stdio.h>
/**
 * main - entry point
 * @letter - stores all alphabet chars 1 at a time
 *
 * Description: This program prints the alphabet in lowercase
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
