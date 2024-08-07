/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:25:50 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/06 14:00:20 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*mem;

	i = 0;
	mem = (int *) malloc(sizeof(int) * length);
	if (!mem)
		return (NULL);
	while (i < length)
	{
		mem[i] = (*f)(tab[i]);
		i++;
	}
	return (mem);
}
/*
int	ft_plus(int a)
{
	int	rslt;

	rslt = a + 1;
	return (rslt);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	*rslt;
	int	i;
	int	size;

	i = 0;
	size = 5;
	rslt = ft_map(tab, size, &ft_plus);
	while (i < size)
	{
		printf("%d\n", rslt[i]);
		i++;
	}
	free(rslt);
	return (0);
}*/
