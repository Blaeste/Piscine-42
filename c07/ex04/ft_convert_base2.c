/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:38:09 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/04 10:53:40 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	is_valid_base(char *base);
int	char_to_value(char c, char *base);
int	check_white_sign(char **str);
int	convert_int(char *str, char *base, int base_len);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	get_len(int nbr, int base_l)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nbr /= base_l;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_l;
	int		len;
	long	n;
	char	*rslt;
	int		is_neg;

	base_l = ft_strlen(base);
	len = get_len(nbr, base_l);
	rslt = (char *) malloc(len + 1);
	is_neg = (nbr < 0);
	if (!rslt)
		return (NULL);
	n = nbr;
	if (is_neg)
		n = -n;
	rslt[len] = '\0';
	while (len > 0)
	{
		len--;
		rslt[len] = base[n % base_l];
		n /= base_l;
	}
	if (is_neg)
		rslt[0] = '-';
	return (rslt);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}
/*
int	main(void)
{
	char	*result;

	result = ft_convert_base("1234", "0123456789", "01");
	if (result)
	{
		printf("Base 10 -> Base 2 : 1234 -> %s\n", result);
		free(result);
	}
	else
		printf("Conversion failed!\n");
	result = ft_convert_base("1010", "01", "0123456789ABCDEF");
	if (result)
	{
		printf("Base 2 -> Base 16 : 1010 -> %s\n", result);
		free(result);
	}
	else
		printf("Conversion failed!\n");
	result = ft_convert_base("-2A3E", "0123456789ABCDEF", "0123456789");
	if (result)
	{
		printf("Base 16 -> Base 10 : -2A3E -> %s\n", result);
		free(result);
	}
	else
		printf("Conversion failed!\n");
	result = ft_convert_base("2147483647", "0123456789", "0123456789ABCDEF");
	if (result)
	{
		printf("Base 10 -> Base 16 : 2147483647 -> %s\n", result);
		free(result);
	}
	else
		printf("Conversion failed!\n");
	result = ft_convert_base("1234", "0123456789", "01234+6789");
	if (result)
	{
		printf("Invalid base test failed!\n");
		free(result);
	}
	else
		printf("Invalid base test passed!\n");
	return (0);
}*/
