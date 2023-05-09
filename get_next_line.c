/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <jgomes-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:20:36 by jgomes-v          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/08 12:52:28 by jgomes-v         ###   ########.fr       */
=======
/*   Updated: 2023/05/09 20:04:33 by jgomes-v         ###   ########.fr       */
>>>>>>> 906173c (update)
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD
char	*ft_free(char *buffer, char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}

static char	*ft_fillbuffer(int fd, char *result)
=======
#include "get_next_line.h"	

static char	*ft_get_line(int fd, char *temp, char *backup)
>>>>>>> 906173c (update)
{
	int		read_bytes;
	char	*char_temp;

<<<<<<< HEAD
	if (!result)
		result = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
=======
>>>>>>> 906173c (update)
	read_bytes = 1;
	while (read_bytes != '\0')
	{
		read_bytes = read(fd, temp, BUFFER_SIZE);
		if (read_bytes == -1)
<<<<<<< HEAD
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		result = ft_free(result, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	if (!result)
		return (NULL);
	return (result);
}

static char	*get_the_line(char *buffer)
=======
			return (0);
		else if (read_bytes == 0)
			break ;
		temp[read_bytes] = '\0';
		if (!backup)
			backup = ft_strdup("");
		char_temp = backup;
		backup = ft_strjoin(char_temp, temp);
		free(char_temp);
		char_temp = NULL;
		if (ft_strchr (temp, '\n'))
			break ;
	}
	return (backup);
}

static char	*extract(char *line)
>>>>>>> 906173c (update)
{
	size_t	count;
	char	*backup;

<<<<<<< HEAD
	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
=======
	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	backup = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*backup == '\0')
>>>>>>> 906173c (update)
	{
		free(backup);
		backup = NULL;
	}
<<<<<<< HEAD
	if (buffer[i] && buffer[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	return (line);
}

static char	*clean_buffer(char *buffer)
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
	clean_buffer = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	while (buffer[i])
	{
		clean_buffer[k] = buffer[i];
		i++;
		k++;
	}
	free(buffer);
	return (clean_buffer);
=======
	line[count + 1] = '\0';
	return (backup);
>>>>>>> 906173c (update)
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*temp;
	static char	*backup;

<<<<<<< HEAD
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = ft_fillbuffer(fd, buffer);
	if (!buffer[0])
	{
		free(buffer);
		buffer = NULL;
	}
	if (!buffer)
		return (NULL);
	line = get_the_line(buffer);
	buffer = clean_buffer(buffer);
	return (line);
}

/*int	main(void)
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("LINE : %s", line);
	free(line);
	line = get_next_line(fd);
	printf("LINE : %s", line);
	free(line);
	line = get_next_line(fd);
	printf("LINE : %s", line);
	free(line);
	line = get_next_line(fd);
	printf("LINE : %s\n", line);
	free(line);

	close(fd);
}*/
=======
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	temp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (0);
	line = ft_get_line(fd, temp, backup);
	free(temp);
	temp = NULL;
	if (!line)
		return (NULL);
	backup = extract(line);
	return (line);
}

// int	main(void)
// {
// 	int fd;
// 	char *line;

// 	fd = open("test.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("LINE : %s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("LINE : %s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("LINE : %s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("LINE : %s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("LINE : %s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("LINE : %s", line);
// 	free(line);

// 	close(fd);
// }
>>>>>>> 906173c (update)
