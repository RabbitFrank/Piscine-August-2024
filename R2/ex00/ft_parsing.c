/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:14:49 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/18 19:25:51 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_trim_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_double_keys (char *str, char *to_find)
{
	int	i;
	int	match1;
	int	match2;

	i = 0;
	match1 = 0;
	match2 = 0;
	while (str[i])
	{
		while (str[i + match1] == to_find[match1])
		{
			match1++;
			i++;
		}
		while (str[i + match2] == to_find[match2])
		{        
			match2++;
			i++;
		}
		i++;
	}
	return (0);
}

int	ft_check_line(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' && str[i] > '9')
			return (1); // Dict Error\n
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] != ' ')
			return (1); // Dict Error\n
		while (str[i] == ' ')
			i++;
		if (str[i] != ':')
			return (1); // Dict Error\n
		while (str[i] == ':')
			i++;
		if (str[i] != ' ')
			return (1); // Dict Error\n
		while (str[i] == ' ')
			i++;
		if (str[i] < 33 && str[i] > 126)
			return (1); // Dict Error\n
		while (str[i] >= 33 && str[i] <= 126)
			i++;
		if (str[i] != '\n')
			return (1); // Dict Error\n
		while (str[i] == '\n')
			i++;
	}
	return (0);
}


int	ft_parsing(char *str)
{
	char	*dic;
	int		l_str;
	int	x;
	
	l_str = 0;
	while (str[l_str])
		l_str++;
	dic = malloc(sizeof(char) * l_str);
	if (!dic)
		return (1);
	/*if (ft_check_double_keys(str, to_find) == 1)
		return (1);*/
	x = ft_check_line(str);
	if (x == 1)
		return (1);
	ft_trim_space(str);
	dic[l_str - 1] = 'a';
	dic[l_str] = '\0';
	return (0);
}
