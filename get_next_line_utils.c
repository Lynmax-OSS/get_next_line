/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:23:57 by keteo             #+#    #+#             */
/*   Updated: 2025/01/22 13:22:46 by keteo            ###   ########.fr       */
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

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*ss;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	ss = (char *)malloc(sizeof(char) * (s_len + 1));
	if (ss == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ss[i] = s[i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	joined = (char *)malloc(s1len + s2len + 1);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, s1len);
	ft_memcpy(joined + s1len, s2, s2len);
	joined[s1len + s2len] = '\0';
	return (joined);
}

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest_str;
	s = (const unsigned char *)src_str;
	if (!dest_str && !src_str && n > 0)
	{
		return (NULL);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest_str);
}
