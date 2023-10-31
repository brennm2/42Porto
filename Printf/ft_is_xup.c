/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_xup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:32:30 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/31 14:45:58 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_xup(size_t x, int i)
{
	unsigned int	u;

	u = (unsigned int)x;
	if (u == 0)
	{
		i = ft_is_c('0', i);
		return (i);
	}
	if (u >= 16)
	{
		i = ft_is_xup(u / 16, i);
		i = ft_is_xup(u % 16, i);
	}
	else
	{
		if (u <= 9)
			i = ft_is_c(u + '0', i);
		else
			i = ft_is_c(u + 'A' - 10, i);
	}
	return (i);
}
