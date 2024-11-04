/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:18 by mlitvino          #+#    #+#             */
/*   Updated: 2024/08/21 17:40:27 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_charset(char a, char *charset)
{
	while (*charset)
	{
		if (a == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	c;

	c = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			c++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
	}
	return (c);
}

int	word_l(char *str, char *charset)
{
	int	l;

	l = 0;
	while (str[l] && !is_charset(str[l], charset))
		l++;
	return (l);
}

char	*ft_strdup(char *str, int l)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((l + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < l)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		l;
	int		word_c;

	word_c = count_words(str, charset);
	tab = (char **)malloc((word_c + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			l = word_l(str, charset);
			tab[i] = ft_strdup(str, l);
			i++;
			str += l;
		}
	}
	tab[i] = NULL;
	return (tab);
}

/*int	main(void)
{
	int		i;
	char	str[] = "I am the coolest, ice crea;m]!";
	char	charset[] = " ,;!";
	char	**result = ft_split(str, charset);
  
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0); 
}*/
