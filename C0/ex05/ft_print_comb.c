/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino.student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:27:54 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/03 18:34:45 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 47;
	while (a++ <= 57)
	{
		b = a;
		while (b++ <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				put_char(a);
				put_char(b);
				put_char(c);
				if (a != 55 || b != 56 || c != 57)
				{			
					put_char(',');
					put_char(' ');
				}
				c++;
			}
		}
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
