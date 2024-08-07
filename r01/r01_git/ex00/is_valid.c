/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:41:30 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/28 14:00:41 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_duplicate(int *grid, int pos)
{
	int	row;
	int	col;
	int	i;

	row = pos / 4;
	col = pos % 4;
	i = 0;
	while (i < col)
	{
		if (grid[row * 4 + i] == grid[pos])
			return (0);
		i++;
	}
	i = 0;
	while (i < row)
	{
		if (grid[i * 4 + col] == grid[pos])
			return (0);
		i++;
	}
	return (1);
}

int	check_clue(int *grid, int pos, int clue[16])
{
	int	row;
	int	max;
	int	count;
	int	i;

	row = pos / 4;
	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[row * 4 + i] > max)
		{
			max = grid[row * 4 + i];
			count++;
		}
		i++;
	}
	return (count == clue[row]);
}

int	is_valid(int *grid, int pos, int clue[16])
{
	if (!is_duplicate(grid, pos))
		return (0);
	if (pos % 4 == 3 && !check_clue(grid, pos, clue))
		return (0);
	return (1);
}
