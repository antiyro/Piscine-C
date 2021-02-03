/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 10:53:22 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/29 08:17:28 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int 	compare(char *str, const char *to_find)
{
	int i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
			return 0;
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	
	i = 0;
	while (*str != 0)
	{
		if (*str == *to_find && compare(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s", ft_strstr(argv[1], argv[2]));	
	}
	return (0);
}
