/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:54:50 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/29 16:00:29 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 2;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}*/
