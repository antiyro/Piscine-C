/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:26:22 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/22 17:08:16 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		main()
{
	char chaine[] = "     +-+--+12345";
	printf("%d", ft_atoi(chaine));
}
