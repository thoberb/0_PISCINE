/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:39:07 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/28 21:04:18 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	tab = (int *) malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	printf("%d\n", ft_ultimate_range(&range, -5, 50));
	while (i < 55)
	{
		printf("%d\n",range[i]);
		i ++;
	}
	return(0);
}
*/
