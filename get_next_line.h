/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/05/08 12:54:05 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/05/08 12:54:12 by jgomes-v         ###   ########.fr       */
=======
/*   Created: 2023/05/05 19:33:32 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/05/09 20:04:21 by jgomes-v         ###   ########.fr       */
>>>>>>> 906173c (update)
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3000
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *s);
<<<<<<< HEAD
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_free(char *buffer, char *buf);

#endif
=======
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int i);
>>>>>>> 906173c (update)
