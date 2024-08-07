/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:20:10 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/03 16:09:28 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c, char *charset)
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

int	count_w(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			count++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		words_count;
	char	**result;

	words_count = count_w(str, charset);
	result = (char **)malloc(sizeof(char *) * (words_count + 1));
	i = 0;
	j = 0;
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			result[j] = malloc_word(&str[i], charset);
			j++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	result[j] = 0;
	return (result);
}
/*
int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("Vive-vement le bbq de cet?te bel!le piscine !", " -!?");
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}*/
