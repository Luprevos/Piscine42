/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roespici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:29:05 by roespici          #+#    #+#             */
/*   Updated: 2024/02/24 16:30:19 by roespici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	map(void);
void	drawline(void);
void	check_str(char *str);
int	str_len(char *str);

#include <stdio.h>

int	main(void)
{	char	*str = "4 3 2 3 1 1 2 2 2 3 4 2 1 2 3 ";
	int	i;

	i = str_len(str);
	printf("%d", i);
	check_str(str);
	map();
}
