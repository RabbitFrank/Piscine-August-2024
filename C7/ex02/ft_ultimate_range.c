/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:43:18 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/19 12:09:58 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min++;
		i++;
	}
	return (size);
}

/*int	main(void)
{
	int	min;
	int	max;
	int		*range;
	min = -5;
	max = 10;
	int result = ft_ultimate_range(&range, min, max);
	printf("%d\n", result);
	int i = 0;
	while(i < result)
	{
		printf("%d", range[i]);
		i++;
	}
	return (0);
}*/
