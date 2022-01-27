/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:17:59 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 16:44:20 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_converter(int *tot_read, va_list ap, char c)
{
	size_t						i;
	static struct s_converter	c_tab[8] = {{'c', &convert_c},
	{'s', &convert_s}, {'i', &convert_id}, {'d', &convert_id},
	{'u', &convert_u}, {'x', &convert_x}, {'X', &convert_big_x},
	{'p', &convert_p}};

	i = 0;
	while (i < sizeof(c_tab) / sizeof(c_tab[0]))
	{
		if (c == c_tab[i].c)
		{
			c_tab[i].f(tot_read, ap);
			return ;
		}
		i++;
	}
	if (c)
		write_add_one(tot_read, c);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		tot_read;

	va_start(ap, str);
	tot_read = 0;
	while (str && *str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				convert_percent(&tot_read);
			else
				ft_get_converter(&tot_read, ap, *str);
		}
		else
			write_add_one(&tot_read, *str);
		str++;
	}
	va_end(ap);
	return (tot_read);
}
