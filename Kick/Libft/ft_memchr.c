/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:30:49 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/09 17:14:43 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*        
#include <string.h>
#include <stdio.h>

int main (void)
{
	//char	s[] = "Vasco da Gama";
	//int		c = 0;
	//unsigned int	n = 1;
	//char s[] = {0, 1, 2 ,3 ,4 ,5};
	//int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("Criada: %s\n", (char *)ft_memchr(((void*)0), '\0', 0x20));
	//printf("Criada: %s\n", (char *)ft_memchr(tab, -1, 7));
	printf("Original: %s\n", (char *)memchr(((void*)0), '\0', 0x20));
	return (0);
} */