#include "../includes/ft_printf.h"
#include <stdio.h>

int		main()
{
	if (num_type('i') == sizeof(int))
	{
		printf("returned an int\n");
	}
	return 0;
}
