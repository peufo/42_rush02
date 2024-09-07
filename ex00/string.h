/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:30:42 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 22:04:56 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H
# include <stdlib.h>

char	*str_cat(char *str, char *str_add, int buffer_len);
int		str_len(char *str);
int		is_space(char c);
char	*str_dup(char *start, char *end);
int		str_cmp(char *s1, char *s2);
#endif
