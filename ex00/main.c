/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:59:30 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 16:16:21 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_number.c"
#include "update_dict.c"


int	main(int ac, char **av)
{

	if (ac != 2 && ac != 3)
	{

		return (1);
	}

	if (ac == 2)
	{
		print_number(av[1]);
		return (0);
	}

	update_dict(av[1], av[2]);
	return (0);
}
