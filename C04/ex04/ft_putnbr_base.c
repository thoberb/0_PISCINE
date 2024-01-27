/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:03:05 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/26 15:03:24 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_validbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+'
				|| base[j] == '+' || base[i] == '-'
				|| base[i] == '-' || base[i] < ' ' || base[j] < ' '
				|| base[i] >= 127 || base[j] >= 127)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long long	n;

	base_len = ft_strlen(base);
	if (!is_validbase(base) || base_len < 2)
		return ;
	n = (long long)nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= base_len)
		ft_putnbr_base((n / base_len), base);
	ft_putchar(base[n % base_len]);
}
