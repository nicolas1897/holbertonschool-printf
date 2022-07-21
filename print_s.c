#include "main.h"
 
/**
 *print_c - print character
 *@arg: argument list
 *
 *Return: always 1
 */
int print_s(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char*);
	
	if (str == NULL)
		str = "(null)";
	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	return (i);
}
