/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:57:47 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/30 17:04:33 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;
	int	a;
	int	b;
	int	temp;

	i = 1;
	a = 0;
	b = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	while (i < index)
	{
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	int	index;

	index = 6;
	printf("%d\n", ft_fibonacci(index));
}*/
