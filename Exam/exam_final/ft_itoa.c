/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:09:33 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/29 08:37:49 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_reverse(char *str)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

char 	*ft_itoa(int nb)
{
	char *str;
	unsigned int n;
	unsigned int i;

	i = 0;
	str = (char *)malloc(sizeof(char) * 13);
	if (nb < 0)
		n = nb * -1;
	else
		n = nb;
	while (n > 9)
	{
		str[i] = (n % 10) + 48;
		i++;
		n /= 10;
	}
	str[i++] = n;
	str[i] = '\0';
	return (ft_reverse(str));
}

#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_itoa(atoi(argv[1])));
}
