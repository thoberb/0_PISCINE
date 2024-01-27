/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:46:53 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/21 21:25:10 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	len;
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		len = ft_strlen(argv[i]);
		write(1, argv[i], len);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
