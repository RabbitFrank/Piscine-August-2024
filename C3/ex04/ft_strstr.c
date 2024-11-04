/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:04:55 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/08 15:49:09 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	match;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		match = 0;
		while (str[i + match] == to_find[match])
		{
			if (to_find[match + 1] == '\0')
				return (str + i);
			match++;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[20] = "Hello kittyll";
	char	to_find[3] = "ll";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
