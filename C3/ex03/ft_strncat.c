/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:06:29 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/08 12:34:39 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_size;

	i = 0;
	d_size = 0;
	while (dest[d_size])
		d_size++;
	while (i < nb && src[i])
	{
		dest[d_size] = src[i];
		i++;
		d_size++;
	}
	dest[d_size] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[10] = "123456";
	char	src[4] = "abc";
	unsigned int nb = 5;
	
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/
