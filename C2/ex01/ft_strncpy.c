/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:23:19 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/12 10:26:36 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	return (dest);
}

/*int	main(void)
{
	char	dest[50] = "";
	unsigned int	n;
	char	src[12] = "123456789";

	n = 7;
	ft_strncpy(dest, src, n);
	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}*/
