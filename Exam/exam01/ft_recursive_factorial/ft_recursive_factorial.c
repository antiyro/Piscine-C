/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:33:53 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/23 11:58:58 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	return(result);
}

int		ft_atoi(char *chaine)
{
	int i;
	int j;
	int signe;
	int result;

	i = 0;
	j = 0;
	result = 0;
	signe = 1;
	while ((chaine[i] >= 9 && chaine[i] <= 13) || chaine[i] == 32)
			i++;
	while (chaine[i] == '-' || chaine[i] == '+')
	{
			if (chaine[i] == '-')
				signe *= -1;
			i++;
	}
	while (chaine[i] >= '0' && chaine[i] <= '9')
	{
		result = result * 10 + (chaine[i] - 48);
		i++;
	}
	return (result * signe);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_recursive_factorial(ft_atoi(argv[1])));		
	}
	return (0);
}
