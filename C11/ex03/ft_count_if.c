/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:27:05 by bberthod          #+#    #+#             */
/*   Updated: 2022/10/03 13:53:51 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	ft_if_a(char *str)
{
	if (*str == 'a')
		return(1);
	return(0);
}

int	main()
{
	char **array;
	int	length;

	length = 3;
	array = malloc(sizeof(char*) * length);
	array[0] = "d";
	array[1] = "a";
	array[2] = "a";

	printf("%d\n", ft_count_if(array, length, &ft_if_a));
}*/
