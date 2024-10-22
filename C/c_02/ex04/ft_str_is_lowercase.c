/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:22:42 by luprevos          #+#    #+#             */
/*   Updated: 2024/02/19 15:31:49 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_lowercase("")?"OK":"Fail",
			ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXZab
			cdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_lowercase("0123456789")?"OK":"Fail",
			!ft_str_is_lowercase(" ")?"OK":"Fail",
			!ft_str_is_lowercase("\\")?"OK":"Fail",
			!ft_str_is_lowercase("\n")?"OK":"Fail");
}*/
