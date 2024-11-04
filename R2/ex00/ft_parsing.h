/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msazhina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:54:56 by msazhina          #+#    #+#             */
/*   Updated: 2024/08/18 18:27:03 by msazhina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H

int	ft_trim_space(char *str);
int	ft_check_double_keys (char *str, char *to_find);
int	ft_check_line(char *str);
int	ft_parsing(char *str);

#endif
