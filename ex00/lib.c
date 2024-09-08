/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:39:48 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 21:23:39 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	put_str(char *str)
{
	if (!str)
		return ;
	while (*str)
		write(1, str++, 1);
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

int	is_entrie(char *str)
{
	if (!*str)
		return (0);
	while (!is_space(*str) && *str != ':')
		str++;
	while (is_space(*str))
		str++;
	if (*(str++) != ':')
		return (0);
	while (is_space(*str) && *str != '\n')
		str++;
	if (*str == '\n')
		return (0);
	return (1);
}
