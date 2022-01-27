/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unum_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:40:09 by jschapin          #+#    #+#             */
/*   Updated: 2021/12/15 12:41:10 by jschapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	unum_len(unsigned long long n, int base)
{
	size_t	num_len;

	if (n <= 0)
	{
		if (n == 0)
			return (1);
		else
			num_len = 1;
	}
	else
		num_len = 0;
	while (n)
	{
		n = n / base;
		num_len++;
	}
	return (num_len);
}
