/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:34:36 by bberthod          #+#    #+#             */
/*   Updated: 2022/09/28 21:11:40 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strs(char	*str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
		{
			i++;
			count ++;
		}
		if (str[i])
			count++;
		while (str[i] && !check_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], charset))
			i++;
	return (i);
}

char	*word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *) malloc(sizeof (char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **) malloc(sizeof(char *) * (count_strs(str, charset) + 1));
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
		{
			strings[i] = word(str, charset);
			i++;
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
/*
int	main(void)
{
	int	i;
	char	**split;
	char	*s1;
	char	*s2;

	s1 = "coucou comment ca va ?";
	s2 = " ";
	split = ft_split(s1, s2);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}*/
