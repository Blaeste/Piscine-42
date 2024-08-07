/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:35:30 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/07 15:37:12 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int	*b)
{
	int	mem;

	mem = *a;
	*a = *b;
	*b = mem;
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("Avant : a = %d b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Apres : a = %d b = %d\n", a, b);
	return (0);
}
