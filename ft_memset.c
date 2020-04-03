/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:20:26 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/09 15:58:06 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *memptr, int val, size_t num)
{
	unsigned char	*placeholder;

	placeholder = (unsigned char *)memptr;
	while (num > 0)
	{
		*placeholder = (unsigned char)val;
		placeholder++;
		num--;
	}
	return (memptr);
}
