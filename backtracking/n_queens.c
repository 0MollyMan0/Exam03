/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:29:16 by anfouger          #+#    #+#             */
/*   Updated: 2026/01/04 13:01:01 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	display(int queens[], int n)
{
	int	row;
	int	col;

	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			if (queens[row] == col)
				printf(" Q ");
			else
				printf(" . ");
			col++;
		}
		printf("\n");
		row++;
	}
	printf("\n");
}

// void	n_queens(int x, int y, int pos, int n, int **tab)
// {

// }

int	main(void)
{
	int	queens[4] = {1, 3, 0, 2};

	display(queens, 4);
	return (0);
}
