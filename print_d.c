#include "main.h"

/**
 *print_d - print character
 *@arg: argument list
 *
 *Return: always 1
 */
int print_d(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
