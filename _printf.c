#include "main.h"

/**                                                                                                                                     

 *_printf - the information received is printend depending on the parameters                                                            

 *@format: pointer character format                                                                                                     

 *Return: error or number of characteres (cont)                                                                                         

 */

int _printf(const char *format, ...)
  
{
  
  int cont;
  

  
  formattype format_list[] = {
			      
			      {"c", print_c},
			      
			      {"s", print_s},
			      
			      {"%", print_mod},
			      
			      {"d", print_d},
			      
			      {"i", print_i},
			      
			      {NULL, NULL}
			      
  };
  

  
  va_list arg;
  

  
  if (format == NULL)
    
    {     return(EXIT_FAILURE);
      

      
      va_start(arg, format);
      

      
      cont = analyzer(format, format_list, arg);
      

      
      va_end(arg);
      
      return(cont);
      
    }
