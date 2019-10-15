#include "../includes/ft_printf.h"
	
static void	something(const char *fmt)
{
	int		i;

	i = 0;
	while (fmt[i])
	{
		if (fmt[i++] == '%')
		;
	}
	write(1, fmt, ft_strlen(fmt));
}

int		ft_printf(const char * format, ...)
{
	int		number_of_bytes;
	va_list	ap;

	number_of_bytes = 0;
	va_start(ap, format);
	something(format);
	va_end(ap);
	return (number_of_bytes);
}
