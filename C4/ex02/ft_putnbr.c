/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 10:47:20 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/09 11:07:16 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	is_min;

	is_min = 0;
	if (nb == -2147483648)
	{
		is_min = 1;
		nb += 1;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}	
	if (nb >= 10)
		ft_putnbr(nb / 10);
	if (is_min == 0)
		ft_putchar((nb % 10) + '0');
	else
		ft_putchar(((nb % 10) + 1) + '0');
}

/*int	main(void)
{
	int	nb;

	nb = 9;
	ft_putnbr(25);
	return (0);
}*/
