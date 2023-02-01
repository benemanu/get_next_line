/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:43:06 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/25 11:42:18 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *retstr, char const *mybuffer);
void	*ft_memcpy(void *dest, void *src, size_t n);
char	*ft_line(char *str);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		return (0);
	}
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *retstr, char const *mybuffer)
{
	char	*str;
	size_t	strlen;
	size_t	i;
	size_t	j;

	i = ft_strlen((char *)mybuffer);
	j = ft_strlen((char *)retstr);
	if (!mybuffer)
		return (NULL);
	strlen = ft_strlen((char *)retstr) + ft_strlen((char *)mybuffer);
	str = (char *)malloc(strlen + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, (char *)retstr, j);
	ft_memcpy(str + j, (char *)mybuffer, i);
	*(str + strlen) = '\0';
	free ((char *)retstr);
	return (str);
}

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*source;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	i = 0;
	return (dest);
}

char	*ft_line(char *str)
{
	int		i;
	char	*strtr;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	strtr = malloc(sizeof(char) * (i + 2));
	if (!strtr)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		strtr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		strtr[i] = str[i];
		i++;
	}
	strtr[i] = '\0';
	return (strtr);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

// char	*ft_strjoin(char *left_str, char *buff)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*str;

// 	if (!left_str)
// 	{
// 		left_str = (char *)malloc(1 * sizeof(char));
// 		left_str[0] = '\0';
// 	}
// 	if (!left_str || !buff)
// 		return (NULL);
// 	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
// 	if (str == NULL)
// 		return (NULL);
// 	i = -1;
// 	j = 0;
// 	if (left_str)
// 		while (left_str[++i] != '\0')
// 			str[i] = left_str[i];
// 	while (buff[j] != '\0')
// 		str[i++] = buff[j++];
// 	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
// 	free(left_str);
// 	return (str);
// }
