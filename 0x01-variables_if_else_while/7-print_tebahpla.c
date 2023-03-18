#include <stdio.h>
/**
 * main - entry point
 * @letter - stores all alphabet chars 1 at a time
 *
 * Description: This program prints the alphabet [z-a]
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
