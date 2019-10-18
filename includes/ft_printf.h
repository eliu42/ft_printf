#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include "../libft/includes/libft.h"

typedef struct s_flags
{
	char	hash;
	char	zero;
	char	minus;
	char	plus;
	char	space;
}				t_flags;

typedef struct s_mod
{
	char	hh;
	char	h;
	char	l;
	char	ll;
}				t_mod;

typedef struct	s_printf
{
	struct s_list	*conversion;
	struct s_mod	*mod;
	struct s_flags	*flags;
}				t_printf;


int			ft_printf(const char * restrict format, ...);

/*		Structure initialization 	*/
t_printf	*init_info(t_printf *info);

t_printf	*find_store_flags(t_printf *info, const char *fmt);
t_printf	*find_store_mods(t_printf *info, const char *fmt);


/*		store.c		*/

void		store_char(t_printf*,char);
void		store_flag(t_printf*,char);
void		store_mod(t_printf*,char);


/*		convert.c	*/

void		convert(t_printf *);

/*		is.c		*/

char		is_flag(char);
char		is_mod(char);
#endif
