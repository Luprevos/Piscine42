/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:08:24 by luprevos          #+#    #+#             */
/*   Updated: 2024/03/03 15:08:32 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;
	int	size;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	result = malloc ((size + 1) * sizeof (int));
	if (result == NULL)
		return (0);
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	*result = ft_range(10,100);
	int	i;

	i = 0;
	while (result[i] && i >= 10 && i <= 100)
		i++;

}*/
