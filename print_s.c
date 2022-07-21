#include "main.h"
 
/**
 *print_s - print a string
 *@arg: argument list
 *Return: always i
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
