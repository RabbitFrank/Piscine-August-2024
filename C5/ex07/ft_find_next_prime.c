/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:34:51 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/14 17:08:44 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	c;

	i = 2;
	c = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			c++;
		if (c > 1)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

/*int	main(void)
{
	int	nb;

	nb = 2;
	while (nb < 100)
	{
		printf("%d ", nb);
		printf("%d\n", ft_find_next_prime(nb));
		nb++;
	}
	return (0);
}*/
