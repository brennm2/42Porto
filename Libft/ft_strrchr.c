/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:46:07 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/04 15:46:08 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		p;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
		{
			p = i;
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return ((char *)&s[p]);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
    char    str[] = "Vasco do Goma";
    int     c = 'o';

    printf("%s\n", strrchr(str, c));
    printf("%s\n", ft_strrchr(str, c));
    return (0);
}*/
