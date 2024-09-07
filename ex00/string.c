/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:31:58 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 17:44:35 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*str_cat(char *str, char *str_add)
{
	char	*cat;
	char	*_cat;

	cat = malloc(sizeof(*cat) * (str_len(str) + str_len(str_add) + 1));
	if (!cat)
		return (NULL);
	_cat = cat;
	while (str && *str)
		*(_cat++) = *(str++);
	while (*str_add)
		*(_cat++) = *(str_add++);
	*_cat = '\0';
	free(str);
	return (cat);
}

int	str_len(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
