#include "../libft.h"

/* Эта функции добавляет новый элеемент в начало списка. */

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
