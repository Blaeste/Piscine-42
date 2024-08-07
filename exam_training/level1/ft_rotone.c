/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:48:32 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/07 15:49:08 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == 'z')
				str[i] = 'a';
			else if (str[i] < 'z')
				str[i] = str[i] + 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] == 'Z')
				str[i] = 'A';
			else if (str[i] < 'Z')
				str[i] = str[i] + 1;
		}
		i++;
	}
	ft_putstr(str);
	ft_putchar('\n');
}
/*
int	main(void)
{
	char str[] = "dadffwwz";

	ft_rotone(str);
	return (0);
}*/
