/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:43:41 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/09 17:20:11 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char	*dest;
	const char	src[] = "lorem ipsum dolor sit amet";
	size_t		n = 8;

	dest = (char *)src + 1;
	
	printf("Funcao criada: %s\n", (char *)ft_memmove(dest, src, n));
	//printf("Funcao original: %s\n", (char *)memmove(dest, src, n));
	return (0);
} */