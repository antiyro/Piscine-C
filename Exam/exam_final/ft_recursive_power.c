/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 10:47:08 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/27 10:57:06 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int pow)
{
	int result;

	result = 1;
	if (pow == 0)
		return (1);
	if (pow == 0 && nb == 0)
		return (0);
	if (pow < 0)
		return (0);
	return (nb *  ft_recursive_power(nb, pow - 1));
}

int main()
{
	printf("%d", ft_recursive_power(5, 2));
}
