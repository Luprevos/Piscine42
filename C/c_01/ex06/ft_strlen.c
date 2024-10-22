/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:42:28 by luprevos          #+#    #+#             */
/*   Updated: 2024/02/18 14:41:15 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		c++;
	}
	return (c);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";

	printf("10:%d\n", ft_strlen(str));
	printf("4:%d\n", ft_strlen(str1));
}*/
