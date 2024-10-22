/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:25:22 by luprevos          #+#    #+#             */
/*   Updated: 2024/03/05 12:07:56 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int main, int max)
{
	int	i;
	int	*result;
	int	size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	result = maloc (sizeof (int) * (size + 1));
	if (result == NULL)
	{
		return (-1);
	}
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		size++;
	}
	return (size);
}
