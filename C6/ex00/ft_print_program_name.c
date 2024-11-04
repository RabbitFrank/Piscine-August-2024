/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:22:26 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/15 12:57:46 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(int argc, char **argv)
{
	while (argv[0][argc])
		argc++;
	write(1, argv[0], argc);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	return (0);
}
