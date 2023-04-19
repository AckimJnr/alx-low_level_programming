#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints optcodes
 * @func: var
 * @num_bytes: number of bytes passed
 *
 * Return: Returns nothing
 */
void print_opcodes(char *func, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", (unsigned char)func[i]);

		if (i != num_bytes - 1)
		{
			printf(" ");
		}
	}
}

/**
 * main - executes program
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: Return 0 on successfull execution and -1 either
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)main, num_bytes);
	printf("\n");

	return (0);
}
