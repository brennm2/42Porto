/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:58:04 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/16 09:48:50 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*bstr;
	unsigned char	*lstr;

	i = 0;
	bstr = (unsigned char *)big;
	lstr = (unsigned char *)little;
	if (!*little)
		return ((char *)big);
	while (bstr[i] && i < len)
	{
		j = 0;
		while (bstr[i + j] == lstr[j] && lstr[j] && i + j < len)
			j++;
		if (!lstr[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int main(void)
// {
// 	const char big[] = "Vasco da gama";
// 	const char little[] = "da";

// 	printf("%s\n", ft_strnstr(big, little, 10));
// 	printf("%s\n", strnstr(big, little, 10));
// 	return (0);
// }