/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:10:15 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 01:36:52 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_number.h"
#include "dict.h"
#include <unistd.h>

void	print_number(char *number, char *dict_name)
{
	t_label	*labels;
	int		len;

	labels = read_dict(dict_name);
	len = str_len(number);
	if (len == 1)
		print_9(labels, number);
	else if (len == 2)
		print_99(labels, number);
	else
		print_999(labels, number);
}

void	print_9(t_label *labels, char *number)
{
	char	*label;
	char	*digit;

	if (!*number)
		return ;
	digit = str_cut(number, number + 1);
	label = get_label(labels, digit);
	put_str(label);
}

void	print_99(t_label *labels, char *number)
{
	char	*nn;

	if (*number == '0')
	{
		print_9(labels, number + 1);
		return ;
	}
	nn = str_cut(number, number + 2);
	put_str(get_label(labels, nn));
	free(nn);
	if (number[0] != '1' && number[1] != '0')
	{
		write(1, " ", 1);
		print_9(labels, number + 1);
	}
	return ;
}

void	print_999(t_label *labels, char *number)
{
	char	*nnn;

	if (*number == '0')
	{
		print_99(labels, number + 1);
		return ;
	}
	print_9(labels, number);
	write(1, " ", 1);
	nnn = str_cut(number, number + 3);
	put_str(get_label(labels, nnn));
	free(nnn);
	write(1, " ", 1);
	print_99(labels, number + 1);
	return ;
}
