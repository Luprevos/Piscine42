/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:33:27 by luprevos          #+#    #+#             */
/*   Updated: 2024/03/05 16:11:23 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	pti;
	int	gra;
	int	mid;
	int	i;

	pti = 0;
	gra = 46340;
	i = 0;
	mid = (pti + gra) / 2;
	if (gra * gra == nb)
		return (gra);
	while (i < 25)
	{
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			pti = mid;
		else if (mid * mid > nb)
			gra = mid;
		mid = (pti + gra) / 2;
		i++;
	}
	return (0);
}
