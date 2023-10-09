/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:46:07 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/09 09:19:59 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		len--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[len]);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
    const char    str[] = "pepe y cparlos";
    int    c = 'c';

	//strrchr(str, c);
    printf("%s \n", strrchr(str, c));
    printf("%s \n", ft_strrchr(str, c));
    return (0);
}*/
