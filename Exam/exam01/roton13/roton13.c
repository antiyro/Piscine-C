/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roton13.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:00:23 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/22 16:25:07 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		alpha_convertion(char c)
{
	if (c >= 'a' && c <= 'm')
		ft_putchar(c + 13);
	if (c >= 'n' && c <= 'z')
		ft_putchar(c - 13);
}

#include <stdio.h>
int main()
{
	char chaine[] = "nathan";
	for (int i = 0; i < 6; i++)
		alpha_convertion(chaine[i]);
}
