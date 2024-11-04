/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:39:21 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/05 17:43:02 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	write(1, str, l);
}

/*int	main(void)
{
	char	*str;

	str = "hello world";
	ft_putstr(str);
	return (0);
}*/
