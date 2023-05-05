/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <jgomes-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:20:36 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/05/05 21:15:50 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_fillbuffer(int fd, char *result)
{
	char	*buffer;
	int		read_bytes;

	if (!result)
		result = malloc(sizeof(char) * 1);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		result = ft_strjoin(result, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (result);
}

char	*get_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = malloc(sizeof(char) + (i + 2));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
	{
		i++;
		line[i] = '\n';
	}
	return (line);
}

char	*clean_buffer(char *buffer)
{
	char	*clean_buffer;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	clean_buffer = malloc(sizeof(char) * (ft_strlen(buffer) - (i + 1)));
	i++;
	while (buffer[i])
	{
		clean_buffer[k] = buffer[i];
		i++;
		k++;
	}
	free(buffer);
	return (clean_buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	buffer = ft_fillbuffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = get_line(buffer);
	buffer = clean_buffer(buffer);
	return (line);
}

int	main(void)
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("LINE : %s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("LINE : %s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("LINE : %s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("LINE : %s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("LINE : %s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("LINE : %s\n", line);

	close(fd);
}