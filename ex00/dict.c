/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:18:37 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 17:56:05 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

#include <stdio.h>

t_label	*read_dict(char *dict_name) {
	int		fd;
	char	*content;

	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Not able to open the file.", sizeof("Not able to open the file."));
		return (NULL);
	}
	content = read_file(fd);
	close(fd);
	printf("%s", content);
	return (NULL);
}

char	*read_file(int fd)
{
	int		nb_read;
	char	stream[100];
	char	*content;

	nb_read = 1;
	while (nb_read != 0)
	{
		nb_read = read(fd, stream, 100);
		content = str_cat(content, stream);
	}
	return (content);
}


