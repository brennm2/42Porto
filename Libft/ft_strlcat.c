/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:31:49 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/05 11:31:50 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size )
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (src[i1])
		i1++;
	while (dst[i2])
		i2++;
	size = i1 + i2;
	return (size);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
    if(ac < 4)
    {
        printf ("\nFalta argumentos :)\n\n");
        return (0);
    }
    printf ("%ld\n", ft_strlcat(av[1], av[2], (size_t)av[3]));
    return (0);
}*/
