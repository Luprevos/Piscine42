/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:16:42 by luprevos          #+#    #+#             */
/*   Updated: 2024/02/27 15:02:41 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello";
    char src[] = " World!";
    size_t dest_size = sizeof(dest);
    size_t dest_len = strlen(dest);

    printf("Avant concaténation : dest = %s\n", dest);

    // Concaténer src à dest avec strncat
    strncat(dest, src, dest_size - dest_len - 1);

    printf("Après concaténation : dest = %s\n", dest);

    return 0;
}
