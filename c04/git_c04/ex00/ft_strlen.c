/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:44:37 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/24 13:51:40 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}
/*
int	main(void)
{
	char	str[50] = "Hello";

	printf("Resultat : %d\n", ft_strlen(str));
	return (0);
}*/
