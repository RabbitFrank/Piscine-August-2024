/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:59:56 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/21 21:01:02 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_show_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_size(int size)
{	
	if (size >= 10)
		ft_show_size(size / 10);
	ft_putchar((size % 10) + '0');
}

void	ft_show_copy(char *copy)
{	
	int	i;

	i = 0;
	while (copy[i])
	{
		ft_putchar(copy[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_show_str(par[i].str);
		ft_putchar('\n');
		ft_show_size(par[i].size);
		ft_putchar('\n');
		ft_show_copy(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

/*int	ft_strlen(char *av)
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
	ar[i].str = 0;
	return (ar);
}

int	main(void)
{
	int	ac;
	char	*av[] = {"pep", "kek", "mem"};
	struct s_stock_str *arr;

	ac = 3;
	ft_strs_to_tab(ac, av);
	arr = ft_strs_to_tab(ac, av);
	ft_show_tab(arr);
	return (0);
}*/
