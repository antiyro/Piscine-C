/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 07:41:16 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/23 07:50:33 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}	

#include <stdio.h>
int main()
{
	char dest[25] = "Bonjour ";
	char src[] = "Nathan";
	ft_strcpy(dest, src);
	for (int i = 0; dest[i] != '\0'; i++)
		printf("%c", dest[i]);
}
