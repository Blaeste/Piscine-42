/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:51:38 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/04 10:29:30 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	range;
	int	*tab;

	min = 15;
	max = 200;
	range = ft_ultimate_range(&tab, min, max);
	printf("%d\n", range);
	free (tab);
	return (0);
}*/
