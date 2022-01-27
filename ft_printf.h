/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:20:02 by jschapin          #+#    #+#             */
/*   Updated: 2022/01/03 16:54:56 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define BASE_DEC "0123456789"
# define BASE_HEX_MIN "0123456789abcdef"
# define BASE_HEX_MAJ "0123456789ABCDEF"

typedef struct s_converter
{
	char	c;
	void	(*f)(int *tot_read, va_list ap);
}				t_converter;

int		ft_printf(const char *str, ...);
void	ft_putnbr_base(int n, char *base);
void	ft_putunbr_base(unsigned long long n, char *base);
void	convert_c(int *tot_read, va_list ap);
void	convert_s(int *tot_read, va_list ap);
void	convert_percent(int *tot_read);
void	convert_id(int *tot_read, va_list ap);
void	convert_u(int *tot_read, va_list ap);
void	convert_x(int *tot_read, va_list ap);
void	convert_big_x(int *tot_read, va_list ap);
void	convert_p(int *tot_read, va_list ap);
void	write_add_one(int *tot_read, char c);
void	write_add_str(int *tot_read, char *str);
size_t	num_len(int n, int base);
size_t	unum_len(unsigned long long n, int base);
size_t	num_len_hex(unsigned long long nb, int base);
void	ft_putchar_fd(char c, int fd);

#endif
