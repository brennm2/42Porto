/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:32:05 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/31 15:57:57 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_x(unsigned int x, int i)
{
	if (x == 0)
	{
		i = ft_is_c('0', i);
		return (i);
	}
	if (x >= 16)
	{
		i = ft_is_x(x / 16, i);
		i = ft_is_x(x % 16, i);
	}
	else
	{
		if (x <= 9)
			i = ft_is_c(x + '0', i);
		else
			i = ft_is_c(x + 'a' - 10, i);
	}
	return (i);
}
