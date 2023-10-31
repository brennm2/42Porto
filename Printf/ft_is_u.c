/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:33:24 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/31 15:21:19 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_u(unsigned int n, int i)
{
	unsigned long	num;

	num = n;
	if (num < 0)
	{
		ft_is_c('-', i);
		num = num * -1;
	}
	if (num > 9)
	{
		i = ft_is_d(num / 10, i);
	}
	i = ft_is_c(num % 10 + '0', i);
	return (i);
}
