/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:06:34 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/21 21:02:23 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *av)
{
	int	size;

	size = 0;
	while (av[size])
		size++;
	return (size);
}

char	*ft_strdup(char *av)
{
	int		l;
	int		i;
	char	*dest;

	l = 0;
	i = 0;
	while (av[l])
		l++;
	dest = (char *)malloc(sizeof(char) * (l + 1));
	if (dest == NULL)
		return (NULL);
	while (av[i])
	{
		dest[i] = av[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*ar;

	ar = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ar[i].size = ft_strlen(av[i]);
		ar[i].str = av[i];
		ar[i].copy = ft_strdup(av[i]);
		if (ar[i].copy == NULL)
		{
			while (i > 0)
				free(ar[--i].copy);
			free(ar);
			return (NULL);
		}
		i++;
	}
	ar[i].str = NULL;
	ar[i].copy = NULL;
	return (ar);
}

/*int	main(void)
{
	int	ac;
	char	*av[] = {"pep", "kek", "mem"};

	ac = 3;
	ft_strs_to_tab(ac, av);
	return (0);
}*/
