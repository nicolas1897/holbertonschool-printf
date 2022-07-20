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
	char format;
	int (*f)(va_list);
} formattype;

/* prototype */
int _printf(const char *format, ...);
int print_c(va_list arg);
int print_s(va_list arg);
int print_mod(va_list arg);
int print_d(va_list arg);
int print_i(va_list arg);

#endif /* _MAIN_H_ */
