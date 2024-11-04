/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:21:32 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/14 13:33:30 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (ft_recursive_power(nb, power - 1) * nb);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 7;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}*/
