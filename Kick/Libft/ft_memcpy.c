/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:19:13 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/10 11:56:14 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    dest[] = "";
    char    src[] = "segfaulter tu dois";
    size_t  n   = 17;

    printf("%s\n", (char *)ft_memcpy(dest, src, n));
    //printf("%s\n", (char *)ft_memcpy("", "segfaulter tu dois", 17));
    //printf("%s\n", (char *)memcpy(dest, src, n));
    return (0);
} */