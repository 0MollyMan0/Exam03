/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:29:16 by anfouger          #+#    #+#             */
/*   Updated: 2026/01/10 12:35:28 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	display_board(int n)
{
	int col;
	int row;

	col = 0;
	while (col < n)
	{
		row = 0;
		while (row < n)
		{
			printf("%s", " . ");
			row++;
		}
		printf("%s", "\n");
		col++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	display_board(atoi(av[1]));
	return (0);
}
