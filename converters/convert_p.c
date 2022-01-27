/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:23:57 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 14:26:11 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_p(int *tot_read, va_list ap)
{
	unsigned long long	n;

	n = va_arg(ap, unsigned long long);
	write_add_one(tot_read, '0');
	write_add_one(tot_read, 'x');
	ft_putunbr_base(n, BASE_HEX_MIN);
	*tot_read += unum_len(n, 16);
}
