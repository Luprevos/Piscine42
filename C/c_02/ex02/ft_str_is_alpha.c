/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:15:34 by luprevos          #+#    #+#             */
/*   Updated: 2024/02/19 12:03:08 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"OK":"Fail",
			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefgh
			ijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_alpha("1")?"OK":"Fail",
			!ft_str_is_alpha(" ")?"OK":"Fail",
			!ft_str_is_alpha("\\")?"OK":"Fail",
			!ft_str_is_alpha("\n")?"OK":"Fail");
}*/
