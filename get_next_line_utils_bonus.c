#include "get_next_line_bonus.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *buffer, int to_find)
{
	if (!buffer)
		return (NULL);
	while (*buffer)
	{
		if (*(unsigned char *)buffer == (unsigned char)to_find)
			return ((char *)buffer);
		buffer++;
	}
	if (*(unsigned char *)buffer == (unsigned char)to_find)
		return ((char *)buffer);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (str == 0)
		return (NULL);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_join(char *previous, const char *current)
{
	size_t	len_prev;
	size_t	len_curr;
	char	*merge;

	len_prev = 0;
	len_curr = 0;
	if (previous)
		len_prev = ft_strlen(previous);
	len_curr = ft_strlen(current);
	merge = (char *)malloc(len_prev + len_curr + 1);
	if (!merge)
		return (NULL);
	if (previous)
		ft_memcpy(merge, previous, len_prev);
	ft_memcpy(merge + len_prev, current, len_curr);
	merge[len_prev + len_curr] = '\0';
	if (previous)
		free(previous);
	return (merge);
}
