/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:15:23 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/06 19:37:41 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (str[i] == '\0')
		return (1);
	while (str[l] != '\0')
		l++;
	while (i < l)
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str = "0467897987";

	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
	return (0);
}*/
