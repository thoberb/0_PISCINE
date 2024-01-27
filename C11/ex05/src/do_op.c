/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:36:14 by bberthod          #+#    #+#             */
/*   Updated: 2022/10/04 19:14:33 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
			write(1, "Stop : division by zero", 23);
		else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
			write(1, "Stop : modulo by zero", 21);
		else if (argv[2][0] == '+')
			ft_putnbr(ft_add(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '-')
			ft_putnbr(ft_sub(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '/')
			ft_putnbr(ft_div(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '*')
			ft_putnbr(ft_mult(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (argv[2][0] == '%')
			ft_putnbr(ft_mod(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else
			write(1, "0", 1);
	}
	return (0);
}
