/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:17:53 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/09 18:57:53 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*altdst;
	char	*altsrc;

	i = 0;
	altdst = (char*)dst;
	altsrc = (char*)src;
	while (n > 0)
	{
		altdst[i] = altsrc[i];
		if (altsrc[i] == (char)c)
			return (altdst + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
