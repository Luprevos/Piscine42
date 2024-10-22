/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roespici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:28:45 by roespici          #+#    #+#             */
/*   Updated: 2024/02/24 16:36:42 by roespici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str_len(str) != 31)
		{
			write(1, "Error\n", 6);
			return ;
		}
		if ((str[0] == ' ') || (str[i] == str[i + 1]))
		{
			write(1, "Error\n", 6);
			return ;
		}
		if (!(str[i] >= '1' && str[i] <= '4') || str[i] == ' ')
		{
			write(1, "Error\n", 6);
			return ;
		}
		i++;
	}
}

void	drawline(void)
{
	int	a;
	int	b;
  	int	c;
	int	d;

	a = 4;
	b = 3;
	c = 2;
	d = 1;		
	ft_putchar(a + '0');
	ft_putchar(' ');
	ft_putchar(b + '0');
	ft_putchar(' ');
	ft_putchar(c + '0');
	ft_putchar(' ');
	ft_putchar(d + '0');
	ft_putchar('\n');
}

void	map(void)
{
	int	y;
	
	y = 0;
	while (y < 4)
	{
		drawline();
		y++;
	}
}
