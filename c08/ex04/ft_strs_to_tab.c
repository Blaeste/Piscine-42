/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:50:00 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/06 11:15:39 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_dup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!dest)
		return (NULL);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_dup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
void	free_tab(struct s_stock_str *tab)
{
	int	i;

	i = 0;
	while (tab[i].str != NULL)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int			i;

	tab = ft_strs_to_tab(argc, argv);
	if (tab == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	i = 0;
	while (i < argc)
	{
		printf("Original string: %s\n", tab[i].str);
		printf("Length: %d\n", tab[i].size);
		printf("Copy: %s\n", tab[i].copy);
		printf("\n");
		i++;
	}
	free_tab(tab);
	return (0);
}*/
