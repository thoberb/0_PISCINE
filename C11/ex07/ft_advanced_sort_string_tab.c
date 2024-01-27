/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:14:31 by bberthod          #+#    #+#             */
/*   Updated: 2022/10/03 21:28:20 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	index;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index +1] && cmp(tab[index], tab[index + 1]) > 0)
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
	ft_advanced_sort_string_tab(tab, ft_strcmp);
	while (i < length)
	{
		printf("%s", tab[i]);
		i++;
	}

}*/
