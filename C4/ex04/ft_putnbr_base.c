/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:43:05 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/13 13:25:13 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_reverse_str(char *final, int i)
{
	while (final[i] >= 0)
	{
		ft_putchar(final[i]);
		i--;
	}
}

int	ft_arg_check(char *base, int size, int nbr, int i)
{
	char	final[256];

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	while (1)
	{
		final[i] = base[nbr % size];
		if (nbr / size == 0)
			break ;
		nbr /= size;
		i++;
	}
	ft_reverse_str(final, i);
	return (0);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-')
			return (0);
		j = size + 1;
		while (base[j])
		{
			if (base[size] == base[j])
				return (0);
			j++;
		}
		size++;
	}
	if (size < 2)
		return (0);
	ft_arg_check(base, size, nbr, i);
	return (0);
}

/*int	main(void)
{
	int		nbr;
	char	base[17] = "0123456789ABCDEF";

	nbr = -45678;
	ft_putnbr_base(nbr, base);
	return (0);
}*/
