/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:32:23 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/15 13:11:39 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_incr(char *c, int n, char max)
{
	if (*c < max)
	{
		*c = *c + 1;
	}
	else
	{
		ft_incr(c - 1, n, max - 1);
		*c = *(c - 1) + 1;
	}
}

void	ft_print_combn(int n)
{
	char	tab[10];
	char	max;
	int		i;

	if (n < 1 || n > 9)
	{
		return ;
	}
	i = 0;
	max = '9';
	while (i < n)
	{
		tab[i] = i + '0';
		i++;
	}
	while (tab[0] < max + 1 - n)
	{
		write(1, tab, n);
		write(1, ", ", 2);
		ft_incr(&tab[n - 1], n, max);
	}
	write(1, tab, n);
}
