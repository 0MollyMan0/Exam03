/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:29:16 by anfouger          #+#    #+#             */
/*   Updated: 2026/01/10 12:42:14 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	display_board(int n, int x, int y)
{
	int row;
	int col;

	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			if (y == row && x == col)
				printf("%s", " Q ");
			else	
				printf("%s", " . ");
			col++;
		}
		printf("%s", "\n");
		row++;
	}
}

int	main(int ac, char **av)
{	
	if (ac != 4)
		return (1);
	display_board(atoi(av[1]), atoi(av[2]), atoi(av[3]));
	return (0);
}
