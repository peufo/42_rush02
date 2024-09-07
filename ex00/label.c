/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   label.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:17:14 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 00:40:18 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "label.h"

char	*get_label(t_label	*labels, char *key)
{
	char	*_key;

	_key = parse_key(key);
	if (!_key)
		return (NULL);
	while (*labels->key)
	{
		if (str_cmp(labels->key, _key) == 0)
		{
			free(_key);
			return (labels->label);
		}
		labels++;
	}
	free(_key);
	return (NULL);
}

char	*parse_key(char *key)
{
	int		len;
	int		i;
	char	*_key;

	len = str_len(key);
	if (len == 0)
		return (NULL);
	_key = str_dup(key);
	if (len == 1)
		return (_key);
	if (len == 2)
	{
		if (_key[0] == '0')
			return (_key + 1);
		if (_key[0] == '1')
			return (_key);
		_key[1] = '0';
		return (_key);
	}
	i = 0;
	_key[i++] = '1';
	while (_key[i])
		_key[i++] = '0';
	return (_key);
}
