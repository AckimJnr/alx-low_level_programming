#include <stdio.h>
/**
 * main - entry point
 * @letter - stores all alphabet chars 1 at a time
 *
 * Description: This program prints the alphabet in lowercase but skips q and e
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
