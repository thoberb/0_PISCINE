/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:38:42 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/18 20:06:28 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ds;
	unsigned int	ss;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	ds = j;
	ss = ft_strlen(src);
	if (size == 0 || size <= ds)
		return (ss + size);
	while (src [i] != '\0' && i < size - ds - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (ds + ss);
}
