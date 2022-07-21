#include "main.h"

/**
 *print_i - print character
 *@arg: argument list
 *Return: always 1
 */
int print_i(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
