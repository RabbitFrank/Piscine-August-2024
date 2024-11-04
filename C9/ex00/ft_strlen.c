/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:44:03 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/05 18:05:40 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

/*int	main(void)
{
	char	*str;

	str = "Hello";
	ft_strlen(str);
	return (0);
}*/
