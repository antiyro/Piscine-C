/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:08:35 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/22 17:16:23 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long n;
	int result;

	n = nb;
	result = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (nb > 9)
		ft_putchar(nb  / 10);
	ft_putchar(nb % 10);
}

int main()
{
	int a;

	a = 42;
	ft_putnbr(a);
}
