/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:05:03 by luprevos          #+#    #+#             */
/*   Updated: 2024/02/27 15:01:39 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[u])
	{
		dest[i + u] = src[u];
		u++;
	}
	dest[i + u] = '\0';
	return (dest);
}

#include <stdio.h>

int main() 
{
    char str1[50] = "Hello ";
    char str2[] = "world!";
    
    ft_strcat(str1, str2);

    printf("Chaîne concaténée : %s\n", str1);

    return 0;
}
