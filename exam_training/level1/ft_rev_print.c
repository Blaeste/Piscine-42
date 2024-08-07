/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:27:33 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/07 15:35:17 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_print(char *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
}

int	main(void)
{
	ft_rev_print("salut les bg");
	write(1, "\n", 1);
	return (0);
}
