/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:52:11 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/05 20:43:32 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	z;

	i = 0;
	z = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[z];
		tab[z] = temp;
		i++;
		z--;
	}
}

/*int	main(void)
{
	int	size;
	int	tab[7] = {4, 5, 6, 1, 7, 8, 4};

	size = 7;
	ft_rev_int_tab(tab, size);
	return (0);
}*/
