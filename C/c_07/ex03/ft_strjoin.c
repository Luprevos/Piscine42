/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:40:47 by luprevos          #+#    #+#             */
/*   Updated: 2024/03/07 18:24:30 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main()
{
	char	s1[60] = "luka";
	printf("%s\n", ft_strcat(s1, "bonjour"));
}*/

int	big_strlen(int size, char **strs, char *sep)
{
	int	tot;
	int	totsep;
	int	i;

	i = 0;
	tot = 0;
	while (i < size)
	{
		tot += ft_strlen(strs[i]);
		i++;
	}
	totsep = (size - 1) * ft_strlen(sep);
	tot += totsep;
	return (tot);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	char	*error;

	result = malloc(sizeof(char) * (big_strlen(size, strs, sep) + 1));
	if (size < 1)
	{
		error = malloc(sizeof(char));
		error[0] = '\0';
		return (error);
	}
	i = 0;
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < (size - 1))
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
