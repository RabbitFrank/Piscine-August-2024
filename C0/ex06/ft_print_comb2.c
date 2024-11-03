/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:08:13 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/03 19:08:58 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				put_char(a / 10 + '0');
				put_char(a % 10 + '0');
				put_char(' ');
				put_char(b / 10 + '0');
				put_char(b % 10 + '0');
				if (a != 98 || b != 99)
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
