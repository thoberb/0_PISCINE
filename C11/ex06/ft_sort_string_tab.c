/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:44:36 by bberthod          #+#    #+#             */
/*   Updated: 2022/10/03 21:29:54 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) && (s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	index;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index +1] && ft_strcmp(tab[index], tab[index + 1]) > 0)
			{
				ft_swap(&tab[index], &tab[index +1]);
				index = 0;
			}
			index++;
		}
		i++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char	**tab;
	int	length;
	int	i;

	length = 6;
	i = 0;
	tab = malloc(sizeof(char**) * length);
	tab[0] = "q";
	tab[1] = "l";
	tab[2] = "a";
	tab[3] = "w";
	tab[4] = "b";
	tab[5] = 0;
	ft_sort_string_tab(tab);
	while (i < length)
	{
		printf("%s", tab[i]);
		i++;
	}

}*/
