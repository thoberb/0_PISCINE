/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:28:11 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/28 21:02:59 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *) malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = 3;
	max = 10;
	array = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d", array[i]);
		i++;
	}
}*/
