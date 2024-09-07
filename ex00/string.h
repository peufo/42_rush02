/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:30:42 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 23:11:04 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H
# include <stdlib.h>

int		str_len(char *str);
int		str_cmp(char *s1, char *s2);
char	*str_cat(char *str, char *str_add, int buffer_len);
char	*str_cut(char *start, char *end);
char	*str_dup(char *str);
#endif
