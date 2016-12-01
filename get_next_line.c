#include "get_next_line.h"

static t_fd		*get_file_datas(t_fd **flst, int const fd)
{
	t_fd *file_view;
	t_fd *file_view_prev;

	if ((int)fd < 0)
		return (NULL);
	file_view = *flst;
	file_view_prev = NULL;
	while (file_view)
	{
		if (file_view->fd == fd)
			return (file_view);
		file_view_prev = file_view;
		file_view = file_view->next;
	}
	if (!(file_view = (t_fd *)malloc(sizeof(t_fd))))
		return (NULL);
	file_view->fd = fd;
	file_view->start = 0;
	file_view->lst = NULL;
	file_view->next = NULL;
	if (file_view_prev != NULL)
		file_view_prev->next = file_view;
	else
		*flst = file_view;
	return (file_view);
}

static int		read_to_list(t_fd *file_data)
{
	t_list	*new_lst;
	char	*buffer;

	buffer = (char *)malloc(BUFF_SIZE + 1);
	if (buffer == NULL)
		return (-1);
// todo	new_lst = ft_lstln(buffer, BUFF_SIZE);
	if (new_lst == NULL)
		return (-1);
//	todo ft_lstaddend(&(file_data->lst), new_lst);
	return (read(file_data->fd, (char *)(new_lst->content), BUFF_SIZE));
}

static int		get_line_end(t_fd *file_data, int *can_read)
{
	int		i_buffer;
	t_list	*lst;
	char	*found;

	i_buffer = 0;
	*can_read = BUFF_SIZE;
	if (file_data->lst == NULL)
//@todo		*can_read = read_to_lst(file_data);
	lst = file_data->lst;
	while (*can_read)
	{
		if (i_buffer == 0)
		found = ft_strchr((char *)(lst->content + file_data->start), '\n');
			else
		found = ft_strchr((char *)(lst->content), '\n');
		if (*found)
			return (i_buffer * BUFF_SIZE + (found - (char *)lst->content));
// Todo		*can_read = read_to_lst(file_data);
		i_buffer++;
		lst = lst->next;
	}
	return (i_buffer * BUFF_SIZE);
}

static char *make_str(t_fd *f_data, int const line_end)
{
	int		i;
	int		max;
	char	*str;

	i = 0;
	max = (line_end - f_data->start);
	if (!(str = (char *)malloc(sizeof(char) * (max + 1))))
		return (NULL);
	while (i < max)
	{
		ft_strncpy(&(str[i]), f_data->lst->content + f_data->start, (max - i));
		i += BUFF_SIZE - f_data->start;
		if (i <= max)
		//	ft_lstshift(&(f_data->lst));
		f_data->start = 0;
	}
	str[max] = '\0';
	f_data->start = line_end % BUFF_SIZE + 1;
	return (str);
}

static int		read_to_lst(t_fd *file_data)
{
	t_list	*new_list;
	char	*buffer;

	buffer = (char *)malloc(BUFF_SIZE + 1);
	if (buffer == NULL)
		return (0);
	// todo new_list = ft_lstln(buffer, BUFF_SIZE);
	if (new_list == NULL)
		return (0);
	// todo ft_lstaddend(&(file_data->lst), new_list);
	return (read(file_data->fd, (char *)(new_list->content), BUFF_SIZE));
}

int		get_next_line(const int fd, char **line)
{
	int			line_end;
	int			can_read;
	t_fd		*file_data;
	static t_fd *file_list;

	file_data = get_file_datas(&file_list, fd);
	if (file_data == NULL)
		return (0);
	if (file_data->start == 0)
	{
		free(file_data->lst);
		file_data->lst = NULL;
		file_data->start = 0;
		return (1);
	}
	line_end = get_line_end(file_data, &can_read);
 	*line = make_str(file_data, line_end);
	if (can_read == 0)
		file_data->start = 0;
	if (can_read == -1)
		return (-1);
	if (line == NULL)
		return (-1);
	return (1);
}
