/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:49:24 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/06 16:06:29 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*tab[5];

	tab[0] = "CC";
	tab[1] = "DD";
	tab[2] = "EEE";
	tab[3] = "FF";
	tab[4] = 0;
	printf("%d\n", ft_any(tab, &ft_str_is_uppercase));
}*/
