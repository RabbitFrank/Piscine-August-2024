/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:17:18 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/06 21:38:28 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96) && (str[i] < 123))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main()
{
	char	str[10] = "akEmawdaws";

	ft_strupcase(str);
	printf("%s", ft_strupcase(str));
	return (0);
}*/
