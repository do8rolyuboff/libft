/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <ogeonosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:36:10 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/17 14:04:45 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = n;
	while (a != n && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
		b--;
	}
	while (b != 0)
	{
		dst[a] = '\0';
		a++;
		b--;
	}
	return (dst);
}
