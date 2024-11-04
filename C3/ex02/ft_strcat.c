/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:16:02 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/08 12:01:37 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_size;

	i = 0;
	d_size = 0;
	while (dest[d_size])
		d_size++;
	while (src[i] != '\0')
	{
		dest[d_size] = src[i];
		d_size++;
		i++;
	}
	dest[d_size] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[10] = "abc";
	char	src[5] = "kek";

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
