/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:28:47 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/16 15:33:16 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	p;

	if (!str)
		return (0);
	p = 0;
	while (str[p])
		p++;
	return (p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (s2 && !s1)
	{
		s1 = (char *)malloc(1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	while (s1[++i])
		res[i] = s1[i];
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	free (s1);
	return (res);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	p;

	p = c;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)p)
			return ((char *)s);
		s++;
	}
	if (p == '\0')
		return ((char *)s);
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	if (n == 0)
		return ;
	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
