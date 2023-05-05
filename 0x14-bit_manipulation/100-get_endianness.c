/**
 * get_endianness - checks the endianess of a system
 *
 * Return: Returns void
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
