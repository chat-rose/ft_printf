/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:20:19 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 11:31:41 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	write_nbr_base(int n, char *base, unsigned int base_size)
{
	unsigned int	un;
	char			c;

	if (n < 0)
	{
		write(1, "-", 1);
		un = -n;
	}
	else
		un = n;
	if (un > base_size - 1)
	{
		write_nbr_base(un / base_size, base, base_size);
		write_nbr_base(un % base_size, base, base_size);
	}
	else
	{
		c = base[un];
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int n, char *base)
{
	unsigned int	base_size;

	base_size = 0;
	while (base[base_size])
		base_size++;
	write_nbr_base(n, base, base_size);
}
