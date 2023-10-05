/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:16:18 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/05 11:28:38 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	char	*src2;

	i = 0;
	src2 = (char *)src;
	dst = src2;
	while (src[i])
		i++;
	size = i;
	return (size);
}

/*
#include <stdio.h>
int     main (int ac, char **av)
{
    if (ac < 4)
        return (printf("\n Falta argumentos :)\n\n"));
    
    printf("%ld\n", ft_strlcpy (av[1], av[2], (size_t )av[3]));
    return (0);
}*/
