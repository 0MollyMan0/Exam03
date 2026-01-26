/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 08:17:30 by anfouger          #+#    #+#             */
/*   Updated: 2026/01/26 08:37:14 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char	c;
	int		is_worked;

	is_worked = read(0, &c, 1);
	while (is_worked)
	{
		write(1, &c, 1);
		is_worked = read(0, &c, 1);	
	}
	if (is_worked == -1)
		perror("error");
	return (0);
}
