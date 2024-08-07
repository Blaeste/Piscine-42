/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:20:02 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/29 15:52:15 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	rslt;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	rslt = 1;
	i = 1;
	while (i <= nb)
	{
		rslt *= i;
		i++;
	}
	return (rslt);
}
/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d\n", ft_iterative_factorial(nb));
}*/
