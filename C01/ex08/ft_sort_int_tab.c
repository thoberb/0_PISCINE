/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:56:11 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/16 14:14:33 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	k;

	i = 0;
	c = 0;
	k = 0;
	while (i < size)
	{
		while ((tab[i] > tab[c]) && c != size)
		{
			k = tab[i];
			tab[i] = tab[c];
			tab[c] = k;
			c++;
		}
		i++;
	}
}
