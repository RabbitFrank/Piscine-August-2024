/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:46:57 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/06 18:56:33 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		if (((str[i] >= 'A') && (str[i] <= 'Z')))
			i++;
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[6] = "adwk";

	ft_str_is_alpha(str);
	return (0);
}*/
