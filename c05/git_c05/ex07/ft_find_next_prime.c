/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:58:19 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/29 17:44:11 by eschwart         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;

	nb = 97;
	printf("%d\n", ft_find_next_prime(nb));
}*/
