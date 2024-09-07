/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jvoisard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:59:30 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/07 18:55:44 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "print_number.h"

int	main(int ac, char **av)
{
	if (ac != 2 && ac != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ac == 2)
	{
		print_number(av[1], "numbers.dict");
		return (0);
	}
	print_number(av[2], av[1]);
	return (0);
}
