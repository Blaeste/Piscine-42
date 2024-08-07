/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:31:42 by eschwart          #+#    #+#             */
/*   Updated: 2024/07/30 14:28:19 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	n;

	if (!ft_is_valid_base(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	ft_putchar(base[n % base_len]);
}
/*
int	main(void)
{
	char	bin_base[] = "01";
	char	oct_base[] = "01234567";
	char	dec_base[] = "0123456789";
	char	hex_base[] = "0123456789abcdef";
	int		num1 = -2147483648;
	int		num2 = 255;
	int		num3 = 123456;

	// Test avec la base binaire
	write(1, "Base binaire : ", 15);
	ft_putnbr_base(num1, bin_base);
	write(1, "\n", 1);
	// Test avec la base octale
	write(1, "Base octale : ", 14);
	ft_putnbr_base(num2, oct_base);
	write(1, "\n", 1);
	// Test avec la base décimale
	write(1, "Base décimale : ", 17);
	ft_putnbr_base(num3, dec_base);
	write(1, "\n", 1);
	// Test avec la base hexadécimale
	write(1, "Base hexadécimale : ", 34);
	ft_putnbr_base(num1, hex_base);
	write(1, "\n", 1);
	return (0);
}*/
