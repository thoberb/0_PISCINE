/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:55:19 by bberthod          #+#    #+#             */
/*   Updated: 2022/10/03 15:14:51 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_croissant(int *tab, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		while (tab[i] == tab[i + 1])
			i++;
		if (tab[i] < tab[i + 1])
			return (1);
		else
			return (0);
	}
	return (0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (length == 0)
		return (1);
	while (i + 1 < length)
	{
		if (ft_is_croissant(tab, length) == 1)
		{	
			if ((*f)(tab[i], tab[i + 1]) <= 0)
				i++;
			else
				return (0);
		}
		else
		{
			if ((*f)(tab[i], tab[i + 1]) >= 0)
				i++;
			else
				return (0);
		}
	}
	return (1);
}

/*
int	int_cmp(int n1, int n2)
{
	return (n1 -n2);
}

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int 	*array;
	int	length;

	length = 5;
	array = malloc(sizeof(int*) * length);
	array[0] = 2;
	array[1] = 2;
	array[2] = 2;
	array[3] = 2;
	array[4] = 2;

	printf("%d\n", ft_is_sort(array, length, &int_cmp));
}*/
