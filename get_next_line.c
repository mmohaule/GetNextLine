/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 09:14:44 by mmohaule          #+#    #+#             */
/*   Updated: 2017/11/08 11:48:41 by cnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	t_fd	*init_fd(int fd)
{
	t_fd	*fd_ptr;

	if (!(fd_ptr = malloc(sizeof(*fd_ptr))))
		return (NULL);
	fd_ptr->next = NULL;
	fd_ptr->bytes = ft_strdup("");
	if (fd_ptr->bytes == NULL)
		return (NULL);
	fd_ptr->fd = fd;
	return (fd_ptr);
}

static	t_fd	*get_fd_addr(t_fd *fd_list, int fd)
{
	while (1)
	{
		if (fd_list->fd == fd)
			return (fd_list);
		else if (!fd_list->next)
			break ;
		fd_list = fd_list->next;
	}
	if (!(fd_list->next = init_fd(fd)))
		return (NULL);
	fd_list = fd_list->next;
	return (fd_list);
}

static	int		read_bytes(t_fd *fd_ptr, char **line)
{
	int		ret;
	char	*bytes;
	char	*newline;
	char	buff[BUFF_SIZE + 1];

	newline = ft_strchr(fd_ptr->bytes, '\n');
	if (newline == NULL)
	{
		if ((ret = read(fd_ptr->fd, buff, BUFF_SIZE)) < 0)
			return (-1);
		buff[ret] = '\0';
		bytes = ft_strjoin(fd_ptr->bytes, buff);
		if (bytes == NULL)
			return (-1);
		free(fd_ptr->bytes);
		fd_ptr->bytes = bytes;
		return (ret);
	}
	*line = ft_strsub(fd_ptr->bytes, 0, newline - fd_ptr->bytes);
	bytes = ft_strsub(newline, 1, ft_strlen(newline) - 1);
	if (*line == NULL || bytes == NULL)
		return (-1);
	free(fd_ptr->bytes);
	fd_ptr->bytes = bytes;
	return (-2);
}

static	int		get_line(t_fd *fd_ptr, char **line)
{
	int ret;

	ret = 1;
	while (ret != 0)
	{
		ret = read_bytes(fd_ptr, line);
		if (ret == -2)
			return (1);
		if (ret == -1)
			return (-1);
	}
	if (*fd_ptr->bytes == '\0')
		return (0);
	*line = fd_ptr->bytes;
	fd_ptr->bytes = ft_strdup("");
	if (fd_ptr->bytes == NULL)
		return (-1);
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static	t_fd	*fd_list = NULL;
	t_fd			*fd_ptr;

	if (fd_list == NULL)
		fd_list = init_fd(fd);
	fd_ptr = get_fd_addr(fd_list, fd);
	if (fd_ptr == NULL || line == NULL)
		return (-1);
	return (get_line(fd_ptr, line));
}
