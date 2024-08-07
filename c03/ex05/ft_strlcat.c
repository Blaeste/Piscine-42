/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:01:17 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/24 13:38:00 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	unsigned int	i;
	unsigned int	j;

	dest_l = 0;
	while (dest[dest_l] != '\0')
		dest_l++;
	src_l = 0;
	while (src[src_l] != '\0')
		src_l++;
	if (size <= dest_l)
		return (size + src_l);
	i = dest_l;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_l + src_l);
}
/*
int	main(void)
{
	char	dest[50] = "Hello, ";
	char	src[] = "World !";
	unsigned int	size;

	size = 15;
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	return (0);
}*/
