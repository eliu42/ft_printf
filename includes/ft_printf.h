/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 14:35:55 by eliu              #+#    #+#             */
/*   Updated: 2018/04/30 00:13:25 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define CONVERSIONS "cCsSdDioOuxXpn%"
# define FLAGS "# +0-."

# include <stdbool.h>
# include "../libft/includes/libft.h"
# include <stdio.h>
# include <stdarg.h>

typedef struct			s_mod
{
	bool				j;
	bool				z;
	bool				h;
	bool				l;
	bool				double_h;
	bool				double_l;
}						t_mod;

typedef struct			s_flag
{
	bool				hash;
	bool				zero;
	bool				minus;
	bool				plus;
	bool				space;
	bool				precision;
//	t_field_width		field_width;
}						t_flag;

typedef struct			s_printf
{
	char				*buf;
	char				conversion;
	int					field_width;
	int					precision;
	int					n;
	t_mod				*mod;
	t_flag				*flag;
}						t_printf;

typedef struct			s_append_flag
{
	char				flag;
	void				(*append)(t_printf *conversions, char *str, int len);
}						t_append_flag;

typedef struct 			s_dispatch
{
	char				type;
	int					(*convert)(t_printf *conversions, va_list va_args);
}						t_dispatch;


int						ft_printf(const char * restrict format, ...);

int						flag_index(char f);
int						conversion_index(char f);

bool					is_hash_flag(char f, t_printf *conversions);
bool					is_minus_flag(char f, t_printf *conversions);
bool					is_plus_flag(char f, t_printf *conversions);
bool					is_space_flag(char f, t_printf *conversions);
bool					is_zero_flag(char f, t_printf *conversions);
bool					is_precision_flag(char f, t_printf *conversions);

bool					is_h_mod(char f, t_printf *conversions);
bool					is_hh_mod(char f, t_printf *conversions);
bool					is_l_mod(char f, t_printf *conversions);
bool					is_ll_mod(char f, t_printf *conversions);
bool					is_j_mod(char f, t_printf *conversions);
bool					is_z_mod(char f, t_printf *conversions);
bool					is__mod(char f, t_printf *conversions);

void					append_hash(t_printf *conversions, char *str, int conv_len);
void					append_space(t_printf *conversions, char *str, int conv_len);
void					append_plus(t_printf *conversions, char *str, int conv_len);
void					append_zero(t_printf *conversions, char *str, int conv_len);
void					append_minus(t_printf *conversions, char *str, int conv_len);
void					append_precision(t_printf *conversions, char *str, int conv_len);
void					append_field_width(t_printf *conversions, char *str, int conv_len);


int						print_c(t_printf *conversions, va_list va_args);
int						print_c_wide(t_printf *conversions, va_list va_args);
int						print_s(t_printf *conversions, va_list va_args);
int						print_s_wide(t_printf *conversions, va_list va_args);
int						print_d(t_printf *conversions, va_list va_args);
int						print_d_long(t_printf *conversions, va_list va_args);
int						print_i(t_printf *conversions, va_list va_args);
int						print_o(t_printf *conversions, va_list va_args);
int						print_o_big(t_printf *conversions, va_list va_args);
int						print_u(t_printf *conversions, va_list va_args);
int						print_x(t_printf *conversions, va_list va_args);
int						print_x_big(t_printf *conversions, va_list va_args);
int						print_p(t_printf *conversions, va_list va_args);
int						print_n(t_printf *conversions, va_list va_args);
int						print_percent(t_printf *conversions, va_list va_args);

int						parse(char *format, t_printf *conversions);
void					init_dispatcher(void);
void					zero_struct(t_printf *conversions);

t_dispatch				*g_dispatcher;
t_append_flag			*g_flags;


#endif
