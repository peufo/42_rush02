/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:10:15 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 00:13:07 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_number.h"
#include "dict.h"
#include <unistd.h>

void	print_number(char *number, char *dict_name)
{
	t_label	*labels;

	labels = read_dict(dict_name);
	print_99(labels, number);
}

void	print_9(t_label *labels, char *number)
{
	char	*label;

	if (!*number)
		return ;
	while (*number)
		number++;
	label = get_label(labels, number - 1);
	put_str(label);
}

void	print_19(t_label *labels, char *number)
{
	char	*end;
	char	*label;

	end = number;
	while (*end)
		end++;
	if ((end - number) == 1)
	{
		print_9(labels, end - 1);
		return ;
	}
	label = get_label(labels, end - 2);
	put_str(label);
	return ;
}

void	print_99(t_label *labels, char *number)
{
	char	*label;
	char	*end;

	end = number;
	while (*end)
		end++;
	if ((end - number) == 0)
		return ;
	if ((end - number) == 1 || (*(end - 2)) < '2')
	{
		print_19(labels, number);
		return ;
	}
	label = get_label(labels, end - 2);
	put_str(label);
	if (*(end - 1) != '0')
	{
		write(1, " ", 1);
		print_9(labels, end - 1);
	}
}

char	*get_label(t_label	*labels, char *key)
{
	int		len;
	char	*_key;

	len = str_len(key);
	if (len == 0)
		return (NULL);
	_key = str_dup(key);
	if (len == 2)
		if (_key[0] > '1')
			_key[1] = '0';
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
