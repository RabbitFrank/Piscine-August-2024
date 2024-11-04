/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:01:16 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/08 11:15:18 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	s1[4] = "4555";
	char	s2[4] = "455";
	int	result;

	result = 123;	
	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/
