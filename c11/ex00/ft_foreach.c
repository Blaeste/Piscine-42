/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:14:20 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/06 13:25:06 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
void	ft_putnbr(int nbr)
{
	long	n;
	int		rslt;

	n = nbr;
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	rslt = n % 10 + '0';
	write (1, &rslt, 1);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};

	ft_foreach(tab, 5, &ft_putnbr);
}*/
