/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:29:40 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/29 16:11:27 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	rslt;

	rslt = 0;
	if (nb < 0)
		return (0);
	while (rslt * rslt < nb)
	{
		rslt++;
	}
	if (rslt * rslt == nb)
		return (rslt);
	return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 56;
	printf("%d\n", ft_sqrt(nb));
}*/
