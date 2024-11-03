/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:02:20 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/02 10:44:33 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	my_char;

	my_char = 'a';
	while (my_char <= 'z')
	{
		write(1, &my_char, 1);
		my_char++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
