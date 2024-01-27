/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:29:08 by bberthod          #+#    #+#             */
/*   Updated: 2022/10/03 12:03:10 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*f_tab;

	i = 0;
	f_tab = malloc(sizeof(*f_tab) * length);
	while (i < length)
	{
		f_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (f_tab);
}

/*
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

int main ()
{
	int *tab;
	int *f_tab;
	int length;
	int i;

	i = 0;
	length = 10;
	f_tab = malloc(sizeof(*f_tab) * length);
	tab = malloc(sizeof(*tab) * length);
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	f_tab = ft_map(tab, length, &ft_iterative_factorial);
	i = 0;
	while (i < length)
	{
		printf("%d\n", f_tab[i]);
		i++;
	}
}*/
