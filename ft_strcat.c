/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:49:40 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/10 13:19:36 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dst, const char *app)
{
	char	*slt;

	slt = dst;
	while (*slt != '\0')
		slt++;
	while (*app != '\0')
	{
		*slt = *app;
		slt++;
		app++;
	}
	*slt = '\0';
	return (dst);
}
