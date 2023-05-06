/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <jgomes-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 21:28:38 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/05/05 23:45:22 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstring;
	int		s1len;
	int		count;

	s1len = ft_strlen(s1);
	joinstring = malloc(sizeof(char) * ((s1len + ft_strlen(s2)) + 1));
	if (!joinstring)
		return (NULL);
	count = 0;
	if (!s1 || !s2)
		return (NULL);
	while (count < s1len)
	{
		joinstring[count] = s1[count];
		count++;
	}
	count = 0;
	while (count < (int)ft_strlen(s2))
	{
		joinstring[s1len + count] = s2[count];
		count++;
	}
	joinstring[s1len + ft_strlen(s2)] = '\0';
	return (joinstring);
}

char	*ft_strchr(const char *s, int c)
{
	char	letter;
	char	*string;
	int		i;

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

void    *ft_calloc(size_t nmemb, size_t size)
{
        void    *hold;

        hold = malloc(size * nmemb);
        if (!hold)
                return (NULL);
        ft_bzero(hold, nmemb * size);
        return (hold);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}