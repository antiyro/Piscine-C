/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 09:50:19 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/23 10:23:21 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_itoa(int nb)
{
	if (nb > 9)
		ft_itoa(nb / 10);
	ft_putchar((nb % 10) + 48);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_itoa(ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}
