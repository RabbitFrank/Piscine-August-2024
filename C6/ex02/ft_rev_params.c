/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:56:18 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/15 18:37:50 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char **argv)
{
	int	i;

	while (argc > 1)
	{
		argc--;
		i = 0;
		while (argv[argc][i])
			i++;
		write(1, argv[argc], i);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
