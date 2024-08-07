/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:37:06 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/04 10:44:11 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
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

int	char_to_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_white_sign(char **str)
{
	int	sign;

	sign = 1;
	while ((**str >= '\t' && **str <= '\r') || **str == ' ')
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	return (sign);
}

int	convert_int(char *str, char *base, int base_len)
{
	int	result;
	int	value;

	result = 0;
	while (*str)
	{
		value = char_to_value(*str, base);
		if (value == -1)
			break ;
		result = result * base_len + value;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_len;

	if (!is_valid_base(base))
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	sign = check_white_sign(&str);
	result = convert_int(str, base, base_len);
	return (result * sign);
}
