/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:22:13 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 12:42:36 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_u(int *tot_read, va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	ft_putunbr_base(n, BASE_DEC);
	*tot_read += unum_len(n, 10);
}

//UNSIGNED DANS LE VA_ARG !! LA MARCHE AVEC SIGNED
