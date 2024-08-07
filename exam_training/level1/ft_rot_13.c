/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:25:59 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/07 15:34:38 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "hello";

	printf("%s\n", ft_rot_13(str));
	return (0);
}
*/