/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:16:18 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/09 17:18:13 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	int			len;

	i = 0;
	j = 0;
	len = ft_strlen((char *)src);
	if (size == 0)
		return (len);
	while (src[j] && j < size - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <bsd/string.h>
// use -lbsd
int     main (void)
{
	char	dst[] = "ABCDEF";
	const char	src[] = "ZXS";
	size_t	size = 3;
	
    printf("%ld\n", ft_strlcpy(dst, src, size));
    printf("%s\n", dst);
	//printf("%ld\n", strlcpy(dst, src, size));
	//printf("%s\n%s\n%ld\n", dst, src, size);
    return (0);
} */