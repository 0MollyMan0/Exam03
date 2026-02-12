/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:50:40 by anfouger          #+#    #+#             */
/*   Updated: 2026/02/12 08:37:32 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(char *str)
{
	size_t i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

// char *ft_strjoin(char *str, unsigned char add)
// {
// 	char *res;

// 	res = malloc(sizeof(ft_strlen(str)) + 1 + 1);
	
// }

int main(int ac, char **av)
{
	unsigned char	buffer;
	ssize_t			r;
	char			*tmp;
	int				i;
	int				j;
	int				len;

	if (ac != 2)
		return (1);
	i = 0;
	len = ft_strlen(av[1]);
	tmp = malloc(len + 1);
	if (!tmp)
		return (1);
	while((r = read(0 , &buffer, 1)) > 0)
	{
		if (buffer == av[1][i])
		{
			tmp[i] = buffer;
			i++;
		}
		else
		{
			j = 0;
			while (j < i)
			{
				write(1, &tmp[j], 1);
				j++;
			}
			if (buffer == av[1][0])
			{
				tmp[0] = buffer;
				i = 1;
			}
			else
			{
				write(1, &buffer, 1);
				i = 0;		
			}
		}
		if (i == len)
		{
			while (i-- > 0)
				write(1, "*", 1);
			i = 0;
		}
	}
	if (i > 0)
	{
		j = 0;
		while (j < i)
		{
			write(1, &tmp[j], 1);
			j++;
		}
	}
	
	if (r == -1)
		perror("Error");
	free(tmp);
	return (0);
}
