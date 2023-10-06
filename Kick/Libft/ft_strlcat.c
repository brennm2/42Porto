/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:31:49 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/06 16:40:03 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		lendst;
	size_t		i;

	i = 0;
	lendst = ft_strlen(dst);
	//if (size > lendst)
	//	return (lendst);
	while(src[i] && i < size)
	{
		dst[lendst++] = src[i++];
	}
	dst[lendst] = '\0';
	return (lendst);

}
/* 
#include <stdio.h>
//#include <bsd/string.h>
// use -lbsd
int     main (void)
{
	//char	dst[] = "vasco";
	//const char	src[] = "gama";
	//size_t	size = 0;
	
	char	dst2[] = "vasco";
	const char	src2[] = "gama";
	size_t	size2 = 2;

    printf("Retorno da ft_criada: %ld\n", ft_strlcat(dst2, src2, size2));
    //printf("%s\n", dst2);
	//printf("Retorno da ft_original: %ld\n", strlcat(dst, src, size));
	//printf("%s\n%s\n%ld\n", dst, src, size);
    return (0);
}  */
