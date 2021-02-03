/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 09:09:53 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/29 08:16:39 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int size;
	int i;

	size = max - min;
	if(!(tab =  (int *)malloc(sizeof(int) * size)))
			return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

#include <stdio.h>
int main()
{
	int tab = *ft_range(-10, 10);
	for (int i = 0; i < 20; i++)
		printf("%d", tab[i]);
}
