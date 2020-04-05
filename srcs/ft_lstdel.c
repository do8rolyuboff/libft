#include "../libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;

	elem = *alst;
	while (elem)
	{
		elem = elem->next;
		ft_lstdelone(alst, del);
		*alst = elem;
	}
}
