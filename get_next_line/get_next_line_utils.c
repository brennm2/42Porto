/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:16:49 by bde-souz          #+#    #+#             */
/*   Updated: 2023/11/15 10:43:09 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str_l1;
	size_t	str_l2;
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str_l1 = ft_strlen(s1);
	str_l2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * ((str_l1 + str_l2) + 1));
	if (!str)
		return (NULL);
	while (i < str_l1)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < str_l2)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*mem;
	unsigned int	buffer;
	unsigned char	*s;

	buffer = nmemb * size;
	mem = malloc(buffer);
	if (!mem)
		return ((void *)0);
	s = (unsigned char *)mem;
	while (buffer-- > 0)
		*s++ = 0;
	return (mem);
}
