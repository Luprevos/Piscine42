/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:35:20 by luprevos          #+#    #+#             */
/*   Updated: 2024/02/14 14:42:05 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int		main(void)
{
	ft_putchar('S');
	ft_putchar('u');
	ft_putchar('c');
	ft_putchar('c');
	ft_putchar('e');
	ft_putchar('s');
	ft_putchar('s');
}*/
