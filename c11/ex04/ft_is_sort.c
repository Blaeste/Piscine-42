/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:20:32 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/06 17:07:39 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_asc;
	int	is_desc;

	if (length < 1)
		return (1);
	is_asc = 1;
	is_desc = 1;
	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			is_asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			is_desc = 0;
		i++;
	}
	return (is_asc || is_desc);
}
/*
int	ft_intcmp(int a, int b)
{
	if (a != b)
		return (a - b);
	return (0);
}

int	main(void)
{
	int	tab0[] = {1, 2, 3, 4, 5};
	//int	tab1[] = {2, 5, 4, 1, 8};
	//int	tab2[] = {5, 4, 3, 2, 1};
	//int	tab3[] = {8};
	//int	tab4[] = {3, 3, 3};

	printf("%d\n", ft_is_sort(tab0, 5, &ft_intcmp));
}*/
