/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 14:19:28 by atep              #+#    #+#             */
/*   Updated: 2018/12/18 14:39:10 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    **ft_read_fd(int *line, int *col, char *tab)
{
	char        buf;
	int         count;
	int         i;
	int         j;

	i = 0;
	j = 0;
	count = 1;
	while (read(STDIN_FILENO, &buf, count))
	{
		tab = ft_strdupcat(tab, buf);
		if (buf != '\n')
			i++;
		else
			j++;
	}
	*col = i / j;
	*line = j;
	return (tab);
}

int		ft_strlen

char	*ft_strdupcat(char *str, char buf)
{
	int		i;
	int		len_str;
	char	*cpy;

	len_str = ft_strlen(str);
	i = 0;
	if (!(cpy = (char*)malloc(sizeof(char) * len_str + 2)))
		return (NULL);
	while (i < len_str)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = buf;
	cpy[i + 1] = '\0';
	str = cpy;
	free(cpy);
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	int		i;
	int 	j;
	char	*tab;
	if (ft_read_fd == tab)
	{
		tab = (char *)malloc(sizeof(char) *
	}
}
