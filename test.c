/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 18:43:10 by eliu              #+#    #+#             */
/*   Updated: 2018/04/27 19:37:54 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_printf(const char * restrict format, ...);

int		main(int argc, char **argv)
{
//	ft_printf("%s", "hello world\n");
	int		integer = 0;
	int		n_int = -2147483648;
	unsigned int	u_int = 2;
	unsigned int	un_int = -2;
	float	buoy = 1234.567;
	float	n_buoy = -1234.567;	

	printf("%10.5d", 42);


/*	printf("%#10% -hash\n");
	printf("%010% -zero\n");
	printf("%-10% -minus\n");
	printf("%+10% -plus\n");
	printf("% 10% -space\n");
	printf("%10% -field width\n");
	printf("%.10% -precision\n");
	printf("%#10% -all \n");

	printf("%+05d\n", 42);
	printf("%#-+d\n", 42);
*	printf("multiple modifiers: \n%020.12d", 424242);
	printf("\n12345678");
	printf("\n\n\n\n");
	printf("%14d\n", 424242);
	printf("%014d\n", 424242);

	
	printf("%s\n", "hello world");
	printf("%.s\n", "hello world");
	printf("%.5s\n", "hello world");

*/





/*
	if (sizeof(integer) == sizeof(n_int))
		printf("nice match!\n");
	if (sizeof(u_int) != sizeof(un_int))
		printf("no match!\n");
	if (sizeof(int) != (sizeof(integer)))
		printf("go gome!\n");
	if (sizeof(int) != (u_int))
		printf("warning: format specifies type XXXX but the argument has type YYYYYY\n");

	long unsigned int test = 1234567890;
	printf("%lu\n", test);

	printf

	printf("%jd\n", 8194);
	printf("%hhd\n", 8194);
	printf("percent percent is:%0999%\n");
	printf("%d\n", 424242424242);
	printf("%d\n", (char)424242424242);
	printf("%d\n", 424242424242 % 127);
	int		i = integer;
*
*	signed integers */ 
//	printf("percent d: %hd %hhd %ld %lld %jd %zd \n", i, i, i, i, i, i);
//	printf("percent D: %D %D\n", 2147483647 , -2147483648);
//	printf("percent i: %i %i\n", 2147483647 , -2147483648);

/*	unsigned integers */
//	printf("percent u: %u %u %u %u \n", integer, n_int, u_int, un_int);
//	printf("percent U: %U %U %U %U \n", integer, n_int, u_int, un_int);
//	printf("percent x: %x %x\n", integer, n_int);
//	printf("percent X: %X %X\n", integer, n_int);

/* octal and hex */
//	printf("percent o: %o %o %o %o \n", integer, n_int, u_int, un_int, 42);
//	printf("percent O: %O %O %o %o \n", integer, n_int, u_int, un_int, 42, 1, -1);
//	printf("percent p (hex) : %p\n", 255 );

//	char *str = "Hello World";

/*	string and chars */ 	
//	printf("percent s: %.999s %s %s \n", str, " hello ", " world ");
//	printf("percent S: %S %S \n", " hello big world", "this is a test");
//	printf("percent c: %c %c\n", 65 , -2147483648);
//	printf("percent C: %C %C\n", 2147483647 , -2147483648);

/*	testing */	
//	printf("this is a number: ", 42);
//	printf("this is a string: ", "hello world");

	
	return (0);
}
