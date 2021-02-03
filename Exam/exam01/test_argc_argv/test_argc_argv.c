/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_argc_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 08:42:07 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/23 09:49:59 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int signe;
	int result;

	i = 0;
	signe = 1;
	result = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result *  10 + (str[i] - 48);
		i++;
	}
	return (result * signe);
}

int		main(int argc, char **argv)
{
	(void)argc;
	if (argc == 3)
	{
		printf("%d\n", ft_atoi(argv[1]) * 2);
		printf("%d", ft_atoi(argv[2]) * 4);
	}
}

