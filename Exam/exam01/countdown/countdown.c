/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countdown.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 07:51:00 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/23 09:27:23 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void countdown(void)
{
    char number;

	number = '9';
	while (number >= '0')
	{
		ft_putchar(number);
		number--;
	}
	ft_putchar('\n');
}

int main()
{
	countdown();
}
