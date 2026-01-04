/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 09:37:47 by anfouger          #+#    #+#             */
/*   Updated: 2026/01/04 10:10:01 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_valid(int *tab, int pos)
{
	if (pos == 0)
		return (1);
	if (tab[pos] == 1 && tab[pos - 1] == 1)
		return 0;
	return (1);
}

void	bit_pos(int pos, int len, int *tab)
{
	int choix;

	if (pos == len)
	{
		for (int i = 0; i < len; i++)
			printf("%d", tab[i]);
		printf("%s", "\n");
		return ;
	}
	
	choix = 0;
	while (choix <= 1)
	{
		tab[pos] = choix;
		if (is_valid(tab, pos))
			bit_pos(pos + 1, len, tab);
		choix++;
	}
}

int main(int ac, char **av)
{
	(void)ac;
	int arr[atoi(av[1])];
	
	bit_pos(0, atoi(av[1]), arr);
	return (0);
}
