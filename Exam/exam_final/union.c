/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 07:59:30 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/29 08:07:47 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc == 3)
	{
		while(argv[1][i])
			i++;
		j = 0;
		while(argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		argv[1][i] = '\0';
		i = 0;
		ft_putchar(argv[1][i])


	}
}
