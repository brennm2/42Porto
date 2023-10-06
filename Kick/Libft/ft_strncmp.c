/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:48:55 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/06 12:30:53 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		len;
	char	*str1;
	char	*str2;

	len = (int )n;
	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((str1[i] || str2[i]) && i < len)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2 [i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int     main(int ac, char **av)
{
    if (ac < 4)
    {
        return (printf("\nFalta argumentos :)\n\n"));
    }
    printf("Criada: %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
    printf("Original: %d\n", strncmp(av[1], av[2], atoi(av[3])));
    return (0);
}*/
