/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:05:33 by bberthod          #+#    #+#             */
/*   Updated: 2022/10/03 12:46:52 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
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

	array = malloc(sizeof(char*) * 3);
	array[0] = "d";
	array[1] = "d";
	array[2] = NULL;

	printf("%d\n", ft_any(array, &ft_if_a));
}*/
