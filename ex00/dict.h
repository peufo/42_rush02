/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjacquet <qjacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:02:07 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 19:02:41 by qjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H
# include <sys/fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "print_number.h"
# include "string.h"

t_label	*read_dict(char *dict_name);
char	*read_file(int fd);
int		get_nb_lines(char *str);
void	add_label_to_dict(char *str, t_label *dict, int index);
void	free_dict(t_label	*dict);
#endif
