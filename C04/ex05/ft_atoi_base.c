/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:01:35 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/26 15:01:53 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				|| base[i] == '-' || base[i] <= ' ' || base[j] <= ' '
				|| base[i] >= 127 || base[j] >= 127)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	convert(char *str, char *base, int res)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				res = res * ft_strlen(base) + j;
				j = 0;
				i++;
			}
			else
				j++;
			if (j >= ft_strlen(base))
				return (res);
		}
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	is_neg;
	int	res;

	i = 0;
	is_neg = 1;
	res = 0;
	if (!is_validbase(base))
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_neg *= -1;
		i++;
	}
	res = convert(&str[i], base, res) * is_neg;
	return (res);
}
