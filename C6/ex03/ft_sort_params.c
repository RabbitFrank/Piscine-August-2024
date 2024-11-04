/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:52:02 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/16 11:44:24 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putorder(int argc, char **argv)
{
	int	c;
	int	i;

	i = 1;
	while (i < argc)
	{
		c = 0;
		while (argv[i][c])
			c++;
		write(1, argv[i], c);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_swap(char **argv1, char **argv2)
{
	char	*temp;

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			c = 0;
			while (argv[j][c] && argv[j][c] == argv[j + 1][c])
				c++;
			if (argv[j][c] > argv[j + 1][c])
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		ft_putorder(argc, argv);
	}
	return (0);
}
