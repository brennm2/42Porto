/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:16:18 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/06 10:03:48 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (src[j] && j < size - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

/* #include <stdio.h>
#include <bsd/string.h>
// use -lbsd
int     main (void)
{
	char	dst[] = "vasco";
	const char	src[] = "gama";
	size_t	size = 5;
	
    //printf("%ld\n", ft_strlcpy(dst, src, size));
    //printf("%s\n", dst);
	printf("%ld\n", strlcpy(dst, src, size));
	printf("%s\n%s\n%ld\n", dst, src, size);
    return (0);
} */