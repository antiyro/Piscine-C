/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spli.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 07:33:36 by nbouhada          #+#    #+#             */
/*   Updated: 2020/10/29 07:59:11 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str)
{
	int i;
	int j;
	int k;
	int first_word;
	char **tab;

	i = 0;
	j = 0;
	k = 0;
	first_word = 1;
	tab = (char **)malloc(sizeof(char *) * 100 + 1);
	if (str[i] == '\0')
	{
		tab[j] = 0;
		return (tab);
	}
	while (str[i])
	{
		if ((is_separator(str[i]) && !is_separator(str[i + 1]) && str[i + 1] != '\0') || first_word)
		{
			tab[j] = (char *)malloc(sizeof(char) * 300);
			first_word = 0;

		}
		if (!is_separator(str[i]))
		{
			tab[j][k] = str[i];
			k++;
		}
		if (!is_separator(str[i]) && is_separator(str[i+1]))
		{
			j++;
			k = 0;
		}
		i++;
	}
	if (is_separator(str[i - 1]))
		tab[j] = NULL;
	else 
		tab[j + 1] = NULL;
	return (tab);
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	(void)argc;
	char **array = ft_split(argv[1]);
	int i;
	
	i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
				i++;
	}
}
