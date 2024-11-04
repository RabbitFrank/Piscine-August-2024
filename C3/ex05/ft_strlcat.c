/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:51:36 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/08 17:34:26 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	src_len;
	unsigned int	i;

	d_len = 0;
	src_len = 0;
	i = 0;
	while (dest[d_len] != '\0')
		d_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= d_len)
		return (size + src_len);
	while (src[i] != '\0' && (d_len + i) < (size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = src[i];
	return (d_len + src_len);
}

/*int	main(void)
{
	char	dest[10] = "1234";
	char	src[4] = "abc";
	unsigned int	size;

	size = 5;
	printf("%s", (ft_strlcat(dest, src, size));
	return (0);
}*/
