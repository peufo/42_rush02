/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:18:37 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 18:55:37 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

#define BUFFER_SIZE 1000

t_label	*read_dict(char *dict_name)
{
	int		fd;
	char	*content;

	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Not able to open the file.", 27);
		return (NULL);
	}
	content = read_file(fd);
	close(fd);
	return (NULL);
}

char	*read_file(int fd)
{
	char	buffer[BUFFER_SIZE];
	char	*content;
	char	*next_content;
	int		buffer_len;
	int		i;

	i = 0;
	content = malloc(sizeof(*content));
	next_content = content;
	if (!content)
		return (NULL);
	content[0] = '\0';
	buffer_len = 1;
	while (buffer_len != 0)
	{
		buffer_len = read(fd, buffer, BUFFER_SIZE);
		next_content = str_cat(content, buffer, buffer_len);
		free(content);
		content = next_content;
	}
	return (content);
}
