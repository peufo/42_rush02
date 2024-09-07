/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   label.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:17:30 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 00:26:07 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LABEL_H
# define LABEL_H
# include "string.h"

typedef struct s_label	t_label;
struct	s_label
{
	char	*key;
	char	*label;
};
char	*get_label(t_label	*labels, char *key);
char	*parse_key(char *key);

#endif
