/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:41:30 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/28 13:09:54 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_grid(int *grid);
int		is_valid(int *grid, int pos, int clue[16]);

void	solve(int *grid, int pos, int clue[16])
{
	int	i;

	if (pos == 16)
	{
		print_grid(grid);
		free(grid);
		exit(0);
	}
	i = 1;
	while (i <= 4)
	{
		grid[pos] = i;
		if (is_valid(grid, pos, clue))
			solve(grid, pos + 1, clue);
		i++;
	}
}
