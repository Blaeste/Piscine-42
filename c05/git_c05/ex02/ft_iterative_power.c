/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:45:47 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/29 15:56:39 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	rslt;

	rslt = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (power > 0)
	{
		rslt *= nb;
		power--;
	}
	return (rslt);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 2;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}*/
