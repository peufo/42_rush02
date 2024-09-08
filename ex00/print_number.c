/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjacquet <qjacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:10:15 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 18:14:57 by qjacquet         ###   ########.fr       */
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
	if ((len % 3) == 1)
		print_n(labels, number);
	else if ((len % 3) == 2)
	{
		print_nn(labels, number);
		number++;
	}
	else if ((len % 3) == 0)
	{
		print_nnn(labels, number);
		number += 2;
	}
	print_next(labels, number);
}

void	print_next(t_label *labels, char *number)
{
	if (str_len(number) < 4)
		return ;
	if (*number != '0')
	{
		write(1, " ", 1);
		put_str(get_label(labels, number));
	}
	write(1, " ", 1);
	print_nnn(labels, number + 1);
	print_next(labels, number + 3);
}

void	print_n(t_label *labels, char *number)
{
	char	*n;

	if (!*number)
		return ;
	n = str_cut(number, number + 1);
	put_str(get_label(labels, n));
}

void	print_nn(t_label *labels, char *number)
{
	char	*nn;

	if (*number == '0')
	{
		if (*(number + 1) != '0')
			print_n(labels, number + 1);
		return ;
	}
	nn = str_cut(number, number + 2);
	put_str(get_label(labels, nn));
	free(nn);
	if (number[0] != '1' && number[1] != '0')
	{
		write(1, " ", 1);
		print_n(labels, number + 1);
	}
	return ;
}

void	print_nnn(t_label *labels, char *number)
{
	char	*nnn;

	if (*number == '0')
	{
		print_nn(labels, number + 1);
		return ;
	}
	print_n(labels, number);
	write(1, " ", 1);
	nnn = str_cut(number, number + 3);
	put_str(get_label(labels, nnn));
	free(nnn);
	write(1, " ", 1);
	print_nn(labels, number + 1);
	return ;
}
