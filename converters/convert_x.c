/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:23:00 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 14:21:15 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_x(int *tot_read, va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	ft_putunbr_base(n, BASE_HEX_MIN);
	*tot_read += unum_len(n, 16);
}
