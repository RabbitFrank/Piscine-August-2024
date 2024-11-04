/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:35:33 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/07 14:35:40 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_check(char *str, int *div, int i)
{
	int	new_w;
	int	pr_sym;

	if (((str[i - 1] < 'A') && (str[i - 1] > '9')) || (i == 0))
		pr_sym = 1;
	else if ((str[i - 1] < '0') || (i == 0))
		pr_sym = 1;
	else if ((str[i - 1] > 'z') || (i == 0))
		pr_sym = 1;
	else if (((str[i - 1] > 'Z') && (str[i - 1] < 'a')) || (i == 0))
		pr_sym = 1;
	else
		pr_sym = 2;
	if ((str[i] >= 'A') && (str[i] <= 'Z'))
		new_w = 3;
	else if ((str[i] >= 'a') && (str[i] <= 'z'))
		new_w = 3;
	else if ((str[i] >= '0') && (str[i] <= '9'))
		new_w = 3;
	else
		new_w = 4;
	*div = pr_sym * new_w;
}

char	ft_strupcase(char *str, int i)
{
	if ((str[i] >= 'a') && (str[i] <= 'z'))
		str[i] = str[i] - 32;
	return (*str);
}

char	ft_strlowcase(char *str, int i)
{
	if ((str[i] >= 'A') && (str[i] <= 'Z'))
		str[i] = str[i] + 32;
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	div;

	i = 0;
	div = 0;
	while (str[i] != '\0')
	{
		ft_check(str, &div, i);
		if (div == 3)
			ft_strupcase(str, i);
		if (div == 6)
			ft_strlowcase(str, i);
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[200] = "sal, com tu vas ? 42mot quar-deux; cinq+et+un";

	ft_strcapitalize(str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
