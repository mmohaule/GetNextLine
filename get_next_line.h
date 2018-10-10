/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohaule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 09:14:22 by mmohaule          #+#    #+#             */
/*   Updated: 2017/11/08 11:52:39 by cnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include "libft/libft.h"

# define BUFF_SIZE 32

typedef struct		s_fd
{
	int				fd;
	char			*bytes;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(int const fd, char **line);

#endif
