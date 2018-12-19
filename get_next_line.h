/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 14:45:23 by atep              #+#    #+#             */
/*   Updated: 2018/12/19 16:17:54 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1

typedef struct	s_file
{
	int				fd;
	struct s_file	*next;
}				t_file;

#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

int		get_next_line(const int fd, char **line);

#endif
