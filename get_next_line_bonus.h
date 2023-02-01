/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:42:33 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/25 14:43:55 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>

char	*get_next_line(int fd);
size_t	ft_strlen(char *s);
void	*ft_memcpy(void *dest, void *src, size_t n);
char	*ft_strjoin(char const *retstr, char const *mybuffer);
char	*ft_line(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_read(int fd, char *str);
char	*ft_line_minus(char *str);

#endif
