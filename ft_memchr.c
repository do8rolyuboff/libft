/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:07:35 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/09 18:56:31 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*altarr;
	size_t			i;

	altarr = (unsigned char *)arr;
	i = 0;
	while (n > i)
	{
		if (altarr[i] == (unsigned char)c)
			return (&altarr[i]);
		i++;
	}
	return (NULL);
}
