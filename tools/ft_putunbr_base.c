/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:56:10 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/17 19:20:06 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	write_unbr_base(unsigned long long un, char *bs, unsigned int base_size)
{
	char	c;

	if (un > base_size - 1)
	{
		write_unbr_base(un / base_size, bs, base_size);
		write_unbr_base(un % base_size, bs, base_size);
	}
	else
	{
		c = bs[un];
		write(1, &c, 1);
	}
}

void	ft_putunbr_base(unsigned long long un, char *bs)
{
	unsigned int	base_size;

	base_size = 0;
	while (bs[base_size])
		base_size++;
	write_unbr_base(un, bs, base_size);
}
