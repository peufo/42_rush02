/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:43:12 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 02:00:03 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_NUMBER_H
# define PRINT_NUMBER_H
# include "lib.h"
# include "label.h"

void	print_number(char *number, char *dict_name);
void	print_n(t_label *labels, char *number);
void	print_nn(t_label *labels, char *number);
void	print_nnn(t_label *labels, char *number);
void	print_next(t_label *labels, char *number);

#endif
