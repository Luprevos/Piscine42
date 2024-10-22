/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:08:01 by luprevos          #+#    #+#             */
/*   Updated: 2024/02/22 10:03:52 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n -1 && s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    int result = strncmp(str1, str2, 4); // Comparaison des 4 premiers caractères

    if (result == 0) {
        printf("Les quatre premiers caractères sont identiques.\n");
    } else if (result < 0) {
        printf(" de str1 sont inférieurs à ceux de str2.\n");
    } else 
        printf(" de str1 sont supérieurs à ceux de str2.\n");
    }

    return 0;
}
*/
