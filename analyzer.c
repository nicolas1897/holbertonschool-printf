#include "main.h"

/**
 *
 *
 *
 */
int analyzer(const char *format, format_list, va_list arg)
{
	int i = 0, j = 0, cont = 0, answ = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{              
			for (j = 0; format_list[j].form; j++)
			{
				if(format[i + 1] == format_list[j].form)
				{
					format_list[j].f(arg);
					break;
				}                                      
			}
		}                                                  
		else                                               
			_putchar(format[i]);                             
	}
}
