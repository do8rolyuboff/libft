/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <ogeonosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:07:42 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/17 14:08:00 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *str)
{
	int c;
	int i;

	if (str == NULL || str[0] == '\0')
		return (0);
	c = 0;
	if (!ft_isspace(str[0]))
		c = 1;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i - 1]) && !ft_isspace(str[i]))
			c++;
		i++;
	}
	return (c);
}
