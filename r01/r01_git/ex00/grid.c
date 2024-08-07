/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:41:30 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/28 13:08:05 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_grid(int *grid)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(grid[i] + '0');
		if (i % 4 == 3)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}
