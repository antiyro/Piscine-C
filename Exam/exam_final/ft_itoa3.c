/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:40:46 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/29 13:09:33 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		ft_len(long nb)
{
	int len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	int i;
	char *result;
	long n = nb;

	i = ft_len(n);
	if (!(result = (char *)malloc(sizeof(char) * (i + 1))))
		return NULL;
	result[i--] = '\0';
	if (n == 0)
	{
		result[i] = '0';
		return (result);
	}
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	while (n > 0)
	{
		result[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (result);
}

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_itoa(atoi(argv[1])));
}
