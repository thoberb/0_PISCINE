/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:44:15 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/25 11:11:56 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if (i * i == b)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(100));
}
*/
