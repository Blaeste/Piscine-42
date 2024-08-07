/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:41:30 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/28 13:38:47 by hchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
int		is_valid(int *grid, int pos, int clue[16]);
void	print_grid(int *grid);
void	solve(int *grid, int pos, int clue[16]);

int	process_input(char *input, int *clue)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (input[i] != '\0' && i <= 30)
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			if (input[i + 1] != ' ' && input[i + 1] != '\0')
			{
				write(1, "wrong arg type\n", 15);
				return (0);
			}
			clue[j++] = input[i] - '0';
		}
		i++;
	}
	if (j != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	*grid;
	int	clue[16];

	if (argc != 2 || !process_input(argv[1], clue))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	grid = (int *)malloc(16 * sizeof(int));
	if (!grid)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	solve(grid, 0, clue);
	write(1, "can't be solved or arg not correct\n", 34);
	free(grid);
	return (0);
}
