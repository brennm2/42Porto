/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:32:22 by bde-souz          #+#    #+#             */
/*   Updated: 2023/11/03 10:52:59 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_c(int c, int i)
{
	if (c == 0)
	{
		i++;
		write(1, "", 1);
		return (i);
	}
	write(1, &c, 1);
	i++;
	return (i);
}
