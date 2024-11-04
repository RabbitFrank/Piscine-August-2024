/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:40:26 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/14 11:18:53 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb != 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

/*int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}*/
