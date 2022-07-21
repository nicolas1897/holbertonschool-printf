#include "main.h"

/**
 *_printf - the information received is printend depending on the parameters
 *@format: pointer character format
 *Return: error or number of characteres (cont)
 */
int _printf(const char *format, ...)
{
	int cont = 0;
	va_list arg;

	format_type format_list[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_mod},
		{"d", print_d},
		{"i", print_d},
		{NULL, NULL}
		};

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	cont = analyzer(format, format_list, arg);
	va_end(arg);
	return (cont);
}
