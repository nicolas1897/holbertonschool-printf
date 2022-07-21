#include "main.h"

/**
 *print_d - print number
 *@arg: argument list
 *Return: always 1
 */
int print_d(va_list arg)
{
	int i = 0, p = 0, div = 1;
	unsigned int n;

	i = va_arg(arg, int);

	if (i < 0)
	{
		p += _putchar('-');
		n = i * -1;
	}
	else
		n = i;

	for (; n / div > 9 ;)
		div *= 10;
	for (; div != 0 ;)
	{
		p += _putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
	return (p);
}
