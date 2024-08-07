/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:42:45 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/29 16:15:17 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	d;

	if (nb < 0)
		return (-1);
	if (nb == 0 || nb == 1)
		return (0);
	i = 1;
	d = 1;
	while (i < nb)
	{
		if (nb % i == 0)
			d++;
		i++;
	}
	if (d == 2)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 97;
	printf("%d\n", ft_is_prime(nb));
}*/
