/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:43:16 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/23 14:08:04 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power -1)));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(3, 0));
}
*/
