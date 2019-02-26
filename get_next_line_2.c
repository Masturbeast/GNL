/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:14:02 by atep              #+#    #+#             */
/*   Updated: 2019/02/26 18:46:12 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_errors(int fd, char **line)
{
	if (fd < 0)
		return (-1);
}

int		ft_get_line(char *buff, char *str, char **line)
{
	char	*tmp;
	int		r;

	if (str == NULL)
		str = ft_strdup(buff);
	while ((r = read(fd, buffm BUFF_SIZE)) > 0)
	{
		tmp = ft_strdup(str);
		free(str);
		str = ft_strjoin(tmp, buff);
		free(tmp);
	}
	if (ft_strchr(str, '\n') != NULL)i
		return (1);
	else
		return(ft_get_line(buff, str, line);
}

int		get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static t_tab	*lst;
	int				r;

	if(fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	while ((r = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[r] = '\0';
		if (ft_get_line(buff, tmp->str) == 1)
			return (1);
	}
	return (0);
}
