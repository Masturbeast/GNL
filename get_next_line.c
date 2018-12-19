/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 14:19:28 by atep              #+#    #+#             */
/*   Updated: 2018/12/19 16:58:26 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_read_fd(const int fd)
{
	char *tab;

	while (read(fd, &buf, BUFF_SIZE))
	{
		if (!(tab = ft_strdupcat(tab, buf)))
				return (NULL);
		if (buf = '\n')
			return(tab);
	}
	return (1);
}

char		*ft_strdupcat(char *str, char buf)
{
	int		i;
	int		len_str;
	char	*cpy;

	len_str = ft_strlen(str);
	i = 0;
	if (!(cpy = (char*)malloc(sizeof(char) * len_str + 2))) //sizeof BUFF_SIZE
		return (NULL);
	while (i < len_str)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = buf;
	cpy[i + 1] = '\0';
	str = cpy;
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	static char *str;
	int 		i;

	i = 0;
	while (str = ft_read_fd(fd))
	{	
		line[i] = str;;
		i++;
		return (1);
	if (ft_read_fd(fd) = 1)
		return (0);
	if (!(ft_read_fd(fd)))
		return (-1);
	}
}
