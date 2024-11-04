/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:37:35 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/14 16:15:58 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;
	int	res;

	res = 0;
	a = 0;
	while (res < nb)
	{
		res = a * a;
		if (res == nb)
			return (a);
		a++;
	}
	return (0);
}

/*int	main(void)
{
	int	nb;

	nb = 9;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/
