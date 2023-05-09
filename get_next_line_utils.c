/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/05/08 12:51:21 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/05/08 12:51:26 by jgomes-v         ###   ########.fr       */
=======
/*   Created: 2023/05/05 21:28:38 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/05/09 19:57:14 by jgomes-v         ###   ########.fr       */
>>>>>>> 906173c (update)
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
<<<<<<< HEAD

	string = (char *)s;
	letter = c;
	i = 0;
	while (string[i] != letter)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (string + i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*hold;

	hold = malloc(size * nmemb);
	if (!hold)
		return (NULL);
	ft_bzero(hold, nmemb * size);
	return (hold);
}

void	ft_bzero(void *s, size_t n)
{
=======
	int		j;
>>>>>>> 906173c (update)
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
<<<<<<< HEAD
}
=======
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
>>>>>>> 906173c (update)
