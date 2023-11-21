/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:01:18 by bde-souz          #+#    #+#             */
/*   Updated: 2023/11/20 14:40:46 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_create_string(char *str, char *buffer)
{
	char	*tempstr;

	tempstr = ft_strjoin(str, buffer);
	if (!tempstr)
		return (free(str), NULL);
	free(str);
	return (tempstr);
}

char	*ft_read_line(int fd, char *str)
{
	char	*buffer;
	int		bytes;

	if (!str)
		str = ft_calloc(1, 1);
	buffer = ft_calloc(1, BUFFER_SIZE + 1);
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		buffer[bytes] = '\0';
		str = ft_create_string(str, buffer);
		if (ft_strchr(str, '\n'))
			break ;
	}
	free(buffer);
	if (!str || bytes < 0)
		return (free(str), NULL);
	return (str);
}

char	*ft_create_line(char *buffer)
{
	int		i;
	char	*tempb;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	tempb = ft_calloc(1, i + 2);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		tempb[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		tempb[i] = '\n';
	return (tempb);
}

char	*ft_clean_to_next(char *buffer)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
		return (free(buffer), NULL);
	str = ft_calloc(1, ft_strlen(buffer) - i);
	i++;
	while (buffer[i])
		str[j++] = buffer[i++];
	str[j] = '\0';
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*buffer[FOPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FOPEN_MAX)
		return (NULL);
	buffer[fd] = ft_read_line(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = ft_create_line(buffer[fd]);
	buffer[fd] = ft_clean_to_next(buffer[fd]);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	int		fd;
// 	char	*line;

// 	if (argc < 2)
// 	{
// 		printf("Use: %s [arquivo1] [arquivo2] ... [arquivoN]\n", argv[0]);
// 		return (1);
// 	}
// 	for (int i = 1; i < argc; i++)
// 	{
// 		fd = open(argv[i], O_RDONLY);
// 		if (fd < 0)
// 		{
// 			printf("Erro ao abrir o arquivo %s\n", argv[i]);
// 			continue ;
// 		}
// 		printf("Conteúdo do arquivo %s:\n", argv[i]);
// 		while ((line = get_next_line(fd)) != NULL)
// 		{
// 			printf("%s\n", line);
// 			free(line);
// 		}
// 		close(fd);
// 		printf("\n");
// 	}
// 	return (0);
// }
