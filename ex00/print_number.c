/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:10:15 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 21:46:18 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_number.h"
#include "dict.h"
#include <unistd.h>

void	print_number(char *number, char *dict_name)
{
	(void)number;
	read_dict(dict_name);
}
