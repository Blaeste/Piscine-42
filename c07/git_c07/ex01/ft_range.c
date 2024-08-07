/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:45:02 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/04 10:51:01 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *) malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*tab;

	min = 7;
	max = 7;
	i = 0;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}	
	free (tab);
	return (0);
}*/
