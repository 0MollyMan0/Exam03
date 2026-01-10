/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:29:16 by anfouger          #+#    #+#             */
/*   Updated: 2026/01/10 13:10:59 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	display_board(int n, int *queens)
{
	int row;
	int col;

	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			if (queens[row] == col)
				printf("%s", " Q ");
			else	
				printf("%s", " . ");
			col++;
		}
		printf("%s", "\n");
		row++;
	}
}

int *place_queens(int n, int *queens)
{
	int row;
	int col;
	
	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			if (col == row)
				queens[row] = col;
			col++;
		}
		row++;
	}
	return (queens);
}

int	main(int ac, char **av)
{
	int x;
	int y;
	int n;
	int *queens;
	
	x = 3;
	y = 4;
	if (ac != 2)
		return (1);
	n = atoi(av[1]);
	queens = malloc(sizeof(int) * n);
	if (!queens)
		return (1);
	place_queens(n, queens);
	display_board(n, queens);
	return (0);
}
