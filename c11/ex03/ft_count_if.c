/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:07:19 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/06 16:19:43 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			n++;
		i++;
	}
	return (n);
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
	printf("%d\n", ft_count_if(tab, 4, &ft_str_is_uppercase));
}*/
