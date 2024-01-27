/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:14:02 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/18 15:14:29 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_printable(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char	*base;
	int		i;
	int		c;

	base = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}	
		else
		{
			if (str[i] < 0)
				c = str[i] + 256;
			ft_putchar('\\');
			ft_putchar(base[c / 16]);
			ft_putchar(base[c % 16]);
		}
		i++;
	}
}
