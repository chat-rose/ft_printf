/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:22:06 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 12:32:58 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_s(int *tot_read, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
	{
		write_add_str(tot_read, "(null)");
		return ;
	}
	while (str && *str)
	{
		write_add_one(tot_read, *str);
		str++;
	}
}
