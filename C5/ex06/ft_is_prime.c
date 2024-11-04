/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:16:33 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/14 16:32:45 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	c;

	i = 2;
	c = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			c++;
		if (c > 1)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	nb;
	
	nb = 2;
	while (nb < 100)
	{
		printf("%d ", nb);
		printf("%d\n", ft_is_prime(nb));
		nb++;
	}
	return (0);
}*/
