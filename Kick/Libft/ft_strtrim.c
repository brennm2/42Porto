/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:45:40 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/16 10:40:26 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description ---------------------------------------
// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

#include "libft.h"

static int	ft_is_set(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		k;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	k = 0;
	while (s1[start] && ft_is_set(s1[start], set))
		start++;
	while (end > start && ft_is_set(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	while (start <= end)
		str[k++] = s1[start++];
	str[k] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
// 	return (0);
// }

// 11
// 112345611
// 9 - 4
// 5