/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 08:58:54 by eschwart          #+#    #+#             */
/*   Updated: 2024/08/07 09:42:55 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c, int out)
{
	write (out, &c, 1);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	ft_putstr(char *src, int out)
{
	int	i;

	i = 0;
	while (src[i])
	{
		ft_putchar(src[i], out);
		i++;
	}
}

void	ft_display_file(char *name)
{
	int		file;
	int		size;
	char	buffer[4000];

	file = open(name, O_RDONLY);
	if (file != -1)
	{
		size = read(file, buffer, sizeof(buffer));
		while (size != 0)
		{
			ft_putstr(buffer, 1);
			size = read(file, buffer, sizeof(buffer));
		}
	}
	else
	{
		ft_putstr("Cannot read file.\n", 1);
	}
	close (file);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	if (argc > 2)
		ft_putstr ("Too many arguments.\n", 2);
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
