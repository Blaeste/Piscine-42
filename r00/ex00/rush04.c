/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alier <alier@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:09:36 by alier             #+#    #+#             */
/*   Updated: 2024/07/20 14:27:40 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_prem(int j, int x)
{
	if (j == 0)
		ft_putchar('A');
	else if (j == x - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	ft_der(int j, int x)
{
	if (j == 0)
		ft_putchar('C');
	else if (j == x - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0)
				ft_prem(j, x);
			else if (i == y - 1)
				ft_der(j, x);
			else if (j == 0 || j == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
