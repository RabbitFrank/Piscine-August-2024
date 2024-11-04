/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:43:44 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/15 12:59:48 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv)
{
	int	c;

	argc = 1;
	while (argv[argc])
	{
		c = 0;
		while (argv[argc][c])
			c++;
		write(1, argv[argc], c);
		write(1, "\n", 1);
		argc++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
