/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:59:35 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/10 16:08:09 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *src, int ch)
{
	size_t	i;
	char	*alts;

	alts = (char*)src;
	i = ft_strlen(src);
	if (ch == '\0')
		return (alts + i);
	while (i != 0)
	{
		if (alts[i] == (char)ch)
			return (alts + i);
		i--;
	}
	if (src[0] == (char)ch)
		return (alts);
	return (0);
}
