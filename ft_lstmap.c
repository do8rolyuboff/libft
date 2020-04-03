/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogeonosi <ogeonosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:39:13 by ogeonosi          #+#    #+#             */
/*   Updated: 2019/09/17 13:55:35 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*element;
	t_list	*noob;

	if (!lst || !f)
		return (NULL);
	element = f(lst);
	noob = element;
	while (lst->next)
	{
		lst = lst->next;
		if (!(element->next = f(lst)))
		{
			free(element->next);
			return (NULL);
		}
		else
			element = element->next;
	}
	return (noob);
}
