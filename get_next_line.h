#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_file
{
  int             fd;
	char			      *line;
	struct s_file		*next;
}               t_file;

#endif
