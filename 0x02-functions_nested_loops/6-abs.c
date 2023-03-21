#include "main.h"
/**
 * _abs - gives absolute value of a number
 * @num: number to be checked
 *
 * Description: Takes any number and give you it's absolute value
 * Return: Returns the absolute value of n
 */
int _abs(int num)
{
	if (num > 0)
		return (num);
	else if (num == 0)
		return (num);
	else
		return (num * -1);
}
