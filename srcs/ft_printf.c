#include "../includes/ft_printf.h"

static char	find_conversion(char c)
{
	return (c == 'c' || c == 'C' || c == 's' || c == 'S' || \
		c == 'p' || c == 'd' || c == 'i' || c == 'o' || \
		c == 'x' || c == 'X') ? 1 : 0;
}

/*
**	ft_printf("not %s\n", here");
*/

static char	gather_info(t_printf *info, const char *fmt)
{
	// s, c, p
	if (find_conversion(*fmt))
	{
		convert(info);
		return (1);
	}
	else if (is_flag(*fmt)) // # 0 - + ' '
		store_flag(info,*fmt);
	else if (is_mod(*fmt)) // l, ll, h, hh, L
		store_mod(info, *fmt);
	else if (*fmt == '%')
		write(1, "%", 1);
	return (0);
}

/*
**	If found a percent, keep reading until a valid conversion is found. While reading, look for flags and modifiers. Find the result of a single conversion, and concatenate it to the final output string.
*/

/*
**	ft_printf("%%This%%thing%%", "%");
*/

static void	parse(const char *fmt, t_printf *info)
{
	int		i;

	i = 0;
	ft_putstr("parse while loop\n");
	while (fmt[i])
	{
		if (fmt[i++] == '%')
			while (gather_info(info, fmt + i))
				i++;
		// else if it equals to a conversion
		else
			store_char(info, fmt[i++]);
	}
	ft_putstr("before writing");
	write(1, info->conversion->content, \
			info->conversion->content_size);
}

int		ft_printf(const char * format, ...)
{
	int			n;
	va_list		ap;
	t_printf	*info = NULL;

	n = 0;
	va_start(ap, format);
ft_putstr("here\n");
	init_info(info);
ft_putstr("here 1");
	parse(format, info);
ft_putstr("here 2");
	va_end(ap);
	return (n);
}
