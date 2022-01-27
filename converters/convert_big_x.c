/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_big_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:21:05 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 14:24:40 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_big_x(int *tot_read, va_list ap)
{
	unsigned int	un;

	un = va_arg(ap, int);
	ft_putunbr_base(un, BASE_HEX_MAJ);
	*tot_read += unum_len(un, 16);
}
