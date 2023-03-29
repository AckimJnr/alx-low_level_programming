/**
 * main - generates random passwords
 *
 * Return: 0 if successful 1- otherwise
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_LENGTH 12

int main(void)
{
	int i;
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASS_LENGTH + 1];

	srand(time(NULL));

	for (i = 0; i < PASS_LENGTH; i++)
	{
		password[i] = charset[rand() % sizeof(charset)];
	}
	password[PASS_LENGTH] = '\0';

	printf("%s\n", password);
	return (0);
}
