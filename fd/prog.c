/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 08:17:30 by anfouger          #+#    #+#             */
/*   Updated: 2026/01/26 09:15:53 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char	buf[4];
	int		fd;
	int		size;
	ssize_t r;

	fd = 0;
	size = 4;
	while ((r = read(fd, buf, size)) > 0)
		printf("%s\n", buf);
	if (r == -1)
		perror("read");
	return (0);
}
