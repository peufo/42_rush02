/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjacquet <qjacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:59:30 by jvoisard          #+#    #+#             */
/*   Updated: 2024/09/08 19:09:02 by qjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "print_number.h"

int	is_valid_arg(int ac, char **av);

int	main(int ac, char **av)
{
	if (!is_valid_arg(ac, av))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ac == 2)
		print_number(av[1], "numbers.dict");
	else
		print_number(av[2], av[1]);
	return (0);
}

int	is_valid_arg(int ac, char **av)
{
	char	*number;

	if (ac != 2 && ac != 3)
		return (0);
	if (ac == 2)
		number = av[1];
	else
		number = av[2];
	if (*number == '-')
		return (0);
	if (str_len(number) > 39)
		return (0);
	return (1);
}
