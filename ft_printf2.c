#include "ft_printf.h"

int ft_format(va_list list, char c)
{
	int count;
	count = 0;
	if(c == '%')
		count += ft_putchar('%');
	else if (c == 'c' )
		count += ft_putchar(va_arg(list, int));
	else if (c == 's')
		count += ft_printstr(va_arg(list,char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(list,int));
	else if (c == 'u')
		count += ft_putnbruns(va_arg(list,unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_printhexa(va_arg(list,unsigned int),c);
	else if (c == 'p' )
		count += ft_printstr("0x");
		count += ft_printadress(va_arg(list,unsigned long),c);
	return (count);
}

int ft_printf(const char *str, ...)
{
	va_list list;
	int count;
	int i;
	
	count = 0;
	i = 0;
	va_start(list,str);
	while(str[i])
	{
		if(str[i] == '%')
	   {
		i++;
		count += ft_format(list,str[i]);
		}
		else
		count +=ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return(count);

}