/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_len_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:46:27 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 11:33:24 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	num_len_hex(unsigned long long nb, int base)
{
	size_t	num_len;

	if (nb == 0)
		return (1);
	num_len = 0;
	while (nb)
	{
		nb = nb / base;
		num_len++;
	}
	return (num_len);
}
