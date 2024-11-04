/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:42:41 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/12 18:40:54 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	minus;
	
	i = 0;
	res = 0;
	minus = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '+')
			i++;
		if (str[i] == '-')
			minus *= -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = (res * 10) + str[i] - '0';
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (res * minus);
		}
		i++;
	}
	return (res * minus);
}

/*int	main(void)
{
	char	str[] = "  ---622-1y24";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
}*/
