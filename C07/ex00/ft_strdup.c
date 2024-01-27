/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:18:16 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/28 22:50:17 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	ptr = (char *) malloc(sizeof(*ptr) * (len + 1));
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	s1[] = "tu parles aux arbres";
	printf("%s", ft_strdup(s1));
}
*/
