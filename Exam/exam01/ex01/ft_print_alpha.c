/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:16:57 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/22 14:35:54 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

int 	ft_index_base(char c)
{
	int i;
	char *base;

    base = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return(i + 1);
		i++;
	}
	return(0);
}

void	ft_putstr(char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putchar(c);
		i++;
	}
}
int		main()
{
	int i;

	i = 0;
	char chaine[] = "nathan";
	while (chaine[i])
	{
		ft_putstr(chaine[i], ft_index_base(chaine[i]));
		i++;
	}
}
