/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:54:06 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/16 09:54:49 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description: --------------------------------------
// Outputs the string ’s’ to the given file descriptor
// followed by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
/* 

int main(void)
{
    ft_putendl_fd("Vasco da Gama", 1);
    return (0);
} */