/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:19:03 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/04 10:38:26 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_cat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	total_l;
	int	sep_l;
	int	i;

	i = 0;
	sep_l = 0;
	total_l = 0;
	while (sep[sep_l])
		sep_l++;
	while (i < size)
	{
		total_l += ft_strlen(strs[i]);
		if (i < size - 1)
			total_l += sep_l;
		i++;
	}
	return (total_l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*joined;
	int		i;

	if (size == 0)
	{
		joined = (char *)malloc(sizeof(char));
		if (!joined)
			return (NULL);
		joined[0] = '\0';
		return (joined);
	}
	len = ft_total_len(size, strs, sep);
	joined = (char *)malloc((len + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	joined[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_cat(joined, strs[i]);
		if (i < size - 1)
			ft_cat(joined, sep);
	}
	return (joined);
}
/*
int	main(void)
{
	int		i;
	char	*tab[4];
	char	*joined;

	tab[0] = "coucou";
	tab[1] = "beau";
	tab[2] = "gosse";
	tab[3] = "ultime";
	joined = ft_strjoin(4, tab, " ><> ");
	i = 0;
	while (joined[i])
	{
		printf("%c", joined[i]);
		i++;
	}
	free (joined);
	return (0);
}*/
