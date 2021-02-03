/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:31:14 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/22 18:48:04 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		j = 0;
		while (tab[j] < tab[j + 1])
		{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;	
			j++;
		}
		i++;
	}
}

#include <stdio.h>
int main()
{
	int tab[] = {5, 1, 3, 4, 2};
	int size = 5;
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
}
