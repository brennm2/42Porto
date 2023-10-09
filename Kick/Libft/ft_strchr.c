/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:27:22 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/09 09:22:00 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
    char    str[] = "Vasco da Gama";
    int     c = 1024;

    printf("Função Original: %s\n", strchr(str, c));
    printf("Função Criada: %s\n", ft_strchr(str, c));
    return (0);
}*/