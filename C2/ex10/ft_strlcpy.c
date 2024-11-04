/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:10:55 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/07 18:57:08 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_l;
	unsigned int	i;

	i = 0;
	src_l = 0;
	while (src[src_l] != '\0')
	{
		src_l++;
	}
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_l);
}

/*int	main(void)
{
	char	dest[10] = "123456789";
	char	src[8] = "12";
	unsigned int	size;
	size = 3;

	ft_strlcpy(dest, src, size);
	printf("%u", ft_strlcpy(dest, src, size));
	return (1);
}*/
