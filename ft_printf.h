/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:45:05 by maaliber          #+#    #+#             */
/*   Updated: 2022/12/19 12:27:08 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include "libft/libft.h"

#define BRED	"\033[1m\033[31m"      /* Bold Red */
#define BWHITE	"\033[1m\033[37m"      /* Bold White */
#define RESET	"\033[0m"

typedef struct s_param
{
	unsigned int	alt;
	unsigned int	space;
	unsigned int	left;
	unsigned int	showsign;
	unsigned int	padded;
	int	width;
	int	prec;
}	t_param;

typedef struct s_arg_spec
{
	struct s_param		*param;
	int					type;
	int					size;
}	t_arg_spec;

typedef struct s_lst_arg
{
	struct s_arg_spec	*spec;
	struct s_lst_arg	*next;
}	t_lst_arg;

typedef struct s_output
{
	char	*to_print;
	ssize_t	size;
}	t_output;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

/*Function for list - used in Parsing functions*/
void		del_arg(t_arg_spec *spec);
t_lst_arg	*ft_lstnew_arg(t_arg_spec *spec);
t_lst_arg	*ft_lstlast_arg(t_lst_arg *lst);
void		ft_lstadd_back_arg(t_lst_arg **lst, t_lst_arg *lnew);
void		ft_lstdelone_arg(t_lst_arg *lst, void (*del)(t_arg_spec*));
void		ft_lstclear_arg(t_lst_arg **lst);

/*Utilised functions - Used functions*/
char		*ft_strjoin_free(char *s1, char *s2);
void		*ft_setalloc(size_t size, char c, int null_terminated);
char		*ft_strinsert(char const *s, char const *to_insert, size_t pos);
char		*ft_strinsert_free(char const *s, char const *to_insert, size_t pos);

/*Parsing functions - used in Main functions*/
int			atoi_printf(const char *nstr, t_arg_spec *spec);
const char	*find_next_fmt(const char *format);
int			init_option(t_arg_spec	*spec, const char *fmt);
t_arg_spec	*init_arg(const char *fmt);
t_lst_arg	*ft_parse_format(const char *fmt);

/*Error functions*/
void		err_msg(char *msg, int c);
int			flag_comp_err(t_arg_spec *spec);
void		flag_err_msg(int errno);
int			flag_error(t_arg_spec *spec);
int			ft_format_error(t_lst_arg *spec_list, char *sup_types);

/*Convert functions - used in Process functions*/
size_t		ft_intlen_base(long long n, size_t b_size);
size_t		ft_uintlen_base(unsigned long long n, size_t b_size);
char		*ft_utoa(unsigned long long n);
char		*ft_itoa_base(int64_t n, char *base);
char		*ft_utoa_base(uint64_t n, char *base);

/*Specifiers modifier functions - used in Ouput functions*/
void		ctype_mod(t_output *output, t_arg_spec *spec);
void		s_null_case(t_output *output, t_arg_spec *spec);	
void		prec_smod(t_output *output, t_arg_spec *spec);
void		prec_nmod(t_output *output, t_arg_spec *spec);
void		padded_mod(t_output *output, t_arg_spec *spec);
void		alt_mod(t_output *output, t_arg_spec *spec);
void		sign_space_mod(t_output *output, t_arg_spec *spec);
void		left_width_mod(t_output *output, t_arg_spec *spec);

/*Process functions - used in Output functions*/
void		p_char(t_output *output, va_list ap);
void		p_str(t_output *output, va_list ap);
void		p_ptr(t_output *output, va_list ap);
void		p_int(t_output *output, va_list ap);
void		p_uint(t_output *output, va_list ap);
void		p_hex(t_output *output, va_list ap);
void		p_uphex(t_output *output, va_list ap);
void		p_pct(t_output *output, va_list ap);

/*Output functions - used in Main functions*/
t_output	*init_output(void);
void		spec_mod(t_output *output, t_arg_spec *spec);
ssize_t		write_arg(va_list ap, t_arg_spec *spec);
ssize_t		ft_output(const char *fmt, va_list ap, t_lst_arg *arg_list);

/*Main function*/
int			ft_printf(const char *format, ...);

#endif