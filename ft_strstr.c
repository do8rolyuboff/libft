/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <ogeonosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:33:41 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/11 14:11:54 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str1, const char *str2)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (*str2 == '\0')
		return ((char *)str1);
	while (str1[i] != '\0')
	{
		c = 0;
		while (str2[c] == str1[i + c])
		{
			if (str2[c + 1] == '\0')
			{
				return ((char *)str1 + i);
			}
			c++;
		}
		i++;
	}
	return (0);
}
