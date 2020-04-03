/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:43:33 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/10 15:46:26 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	int		i;

	i = 0;
	alts = (char*)s;
	altc = c;
	while (alts[i] != altc)
	{
		if (alts[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char*)alts + i);
}
