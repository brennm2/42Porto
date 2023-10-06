/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:31:49 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/06 11:27:51 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size )
{
	int	i1;
	size_t	i2;
	size_t i3;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	while (src[i1])
		i1++;
	while (dst[i2] && i2 < size - 1)
	{
		i2++;
	}

	i3 = i1 + i2;
	return (i3);
}
/* 
#include <stdio.h>
#include <bsd/string.h>
// use -lbsd
int     main (void)
{
	char	dst[] = "vasco";
	const char	src[] = "gama";
	size_t	size = 0;
	
	char	dst2[] = "vasco";
	const char	src2[] = "gama";
	size_t	size2 = 1;

    printf("Retorno da ft_criada: %ld\n", ft_strlcat(dst2, src2, size2));
    //printf("%s\n", dst2);
	printf("Retorno da ft_original: %ld\n", strlcat(dst, src, size));
	printf("%s\n%s\n%ld\n", dst, src, size);
    return (0);
} */
