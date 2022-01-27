/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_id.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:21:33 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 11:30:20 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	convert_id(int *tot_read, va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	ft_putnbr_base(n, BASE_DEC);
	*tot_read += num_len(n, 10);
}

//LONG LONG INT N
