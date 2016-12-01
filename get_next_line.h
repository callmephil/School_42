#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE 32

typedef struct s_fd
{
	int			fd;
	int			start;
	t_list		*lst;
	struct s_fd	*next;
}				t_fd;

int				get_next_line(const int fd, char **line);

#endif
