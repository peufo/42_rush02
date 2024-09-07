/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:31:58 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 23:15:37 by jvoisard         ###   ########.fr       */
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

char	*str_cut(char *start, char *end)
{
	char	*cut;
	char	*_cut;

	cut = malloc(sizeof(*cut) * (end - start + 1));
	if (!cut)
		return (NULL);
	_cut = cut;
	while (start < end)
		*(_cut++) = *(start++);
	*_cut = '\0';
	return (cut);
}

int	str_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*str_dup(char *str)
{
	char	*dup;
	char	*_dup;

	dup = malloc(sizeof(*dup) * (str_len(str) + 1));
	if (!dup)
		return (NULL);
	_dup = dup;
	while (*str)
		*(_dup++) = *(str++);
	*_dup = '\0';
	return (dup);
}
