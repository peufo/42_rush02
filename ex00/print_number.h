/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:43:12 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 17:21:26 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_NUMBER_H
# define PRINT_NUMBER_H

void	print_number(char *number, char *dict_name);
typedef struct s_label	t_label;
struct	s_label
{
	char	*key;
	char	*label;
};

#endif
