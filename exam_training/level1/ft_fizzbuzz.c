/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizzbuzz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:02:33 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/07 15:31:47 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_fizzbuzz(void)
{
	int		i;
	char	c;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz\n");
		else if (i % 3 == 0)
			ft_putstr("fizz\n");
		else if (i % 5 == 0)
			ft_putstr("buzz\n");
		else
		{
			if (i >= 10)
			{
				c = (i / 10) + '0';
				ft_putchar(c);
			}
			c = (i % 10) + '0';
			ft_putchar(c);
			ft_putchar('\n');
		}
		i++;
	}
}

int	main(void)
{
	ft_fizzbuzz();
	return (0);
}
