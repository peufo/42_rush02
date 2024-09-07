/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:10:15 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 22:16:12 by jvoisard         ###   ########.fr       */
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

void	print_99(t_label *labels, char *number)
{
	int		d;
	int		u;
	char	*label_d;
	char	*label_u;

	while (*number)
		number++;
	d = *(number - 2) - '0';
	u = *(number - 1) - '0';
	if (d < 2)
	{
		label_d = get_label(labels, number - 2);
		while (*label_d)
			write(1, label_d++, 1);
	}
	label_u = get_label(labels, number - 1);
	*(number - 1) = '0';
	label_d = get_label(labels, number - 2);
	while (*label_d)
		write(1, label_d++, 1);
	write(1, " ", 1);
	while (*label_u)
		write(1, label_u++, 1);
}

char	*get_label(t_label	*labels, char *key)
{
	while (*labels->key)
	{
		if (str_cmp(labels->key, key) == 0)
			return (labels->label);
		labels++;
	}
	return (NULL);
}
