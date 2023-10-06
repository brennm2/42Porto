/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:58:20 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/06 09:59:33 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/* #include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    str[] = "Vasco da Gama";
    int     c = '-';
    size_t  n = 2;
    char    *put;
	//char	*put2;
    put = ft_memset(str, c, n);
	//put2 = memset(str, c, n);

	//printf("%s\n", put2);
	printf("%s\n", put);
    return (0);
} */
