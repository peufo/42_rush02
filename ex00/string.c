/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:31:58 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 21:31:19 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <unistd.h>

char	*str_cat(char *str, char *buffer, int buffer_len)
{
	char	*cat;
	char	*_cat;
	int		cat_len;
	int		i;

	cat_len = str_len(str) + buffer_len;
	cat = malloc(sizeof(*cat) * (cat_len + 1));
	if (!cat)
		return (NULL);
	_cat = cat;
	while (str && *str)
		*(_cat++) = *(str++);
	i = 0;
	while (i++ < buffer_len)
		*(_cat++) = *(buffer++);
	*_cat = '\0';
	return (cat);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_space(char c)
{
	return (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}

char	*str_dup(char *start, char *end)
{
	char	*dup;
	char	*_dup;

	dup = malloc(sizeof(*dup) * (end - start + 1));
	if (!dup)
		return (NULL);
	_dup = dup;
	while (start < end)
		*(_dup++) = *(start++);
	*_dup = '\0';
	return (dup);
}
