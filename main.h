#ifndef _MAIN_H_
#define _MAIN_H_

/* includ libs */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *struct ft - _printf struct
 *@format: oparator 
 *@f: function format
 */
typedef struct ft
{
	char *form;
	int (*f)(va_list);
} format_type;

/* prototype */
int _printf(const char *format, ...);
int print_c(va_list arg);
int print_s(va_list arg);
int print_mod(va_list arg);
int print_d(va_list arg);
int print_i(va_list arg);
int _putchar(char c);

#endif /* _MAIN_H_ */
