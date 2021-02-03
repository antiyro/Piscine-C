/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 07:59:36 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/23 08:29:54 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_revprint(char *str)
{
	int i;
	int j;

	i = ft_strlen(str) - 1;
	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[i]);
		i--;
		j++;
	}

}

int main()
{
	ft_revprint("Nathan");
}
