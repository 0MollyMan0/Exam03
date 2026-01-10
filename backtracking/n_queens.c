/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:29:16 by anfouger          #+#    #+#             */
/*   Updated: 2026/01/10 15:36:43 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_diag_right(int q_row, int q_col, int row, int col)
{
	int	diag_row;
	int	diag_col;
	
	diag_row = q_row + 1;
	diag_col = q_col + 1;
	while (diag_row <= row)
	{
		if (diag_col == col && diag_row == row)
			return(0);
		diag_col++;
		diag_row++;
	}
	return (1);
}

int	check_diag_left(int q_row, int q_col, int row, int col)
{
	int	diag_row;
	int	diag_col;
	
	diag_row = q_row + 1;
	diag_col = q_col - 1;
	while (diag_col >= 0)
	{
		if (diag_col == col && diag_row == row)
			return(0);
		diag_col--;
		diag_row++;
	}
	return (1);
}

int is_valid(int *queens, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (queens[i] == col
			|| !check_diag_left(i, queens[i], row, col)
			|| !check_diag_right(i, queens[i], row, col))
			return (0);
		i++;
	}
	return (1);
}

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

void	n_queens(int n, int row, int *queens)
{
	int col;

	if (row == n)
	{
		display_board(n, queens);
		printf("%s", "\n");
		return ;
	}
	col = 0;
	while (col < n)
	{
		if (is_valid(queens, row, col))
		{
			queens[row] = col;
			n_queens(n, row+1, queens);
		}
		col++;
	}
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
	n_queens(n, 0, queens);
	return (0);
}
