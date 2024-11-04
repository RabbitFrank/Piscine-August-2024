/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:41:40 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/06 21:44:58 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int     main(void)
{
        char    str[20] = "akEmsdaDEQfasdawT";

        ft_strlowcase(str);
        printf("%s", ft_strlowcase(str));
        return (0);
}*/
