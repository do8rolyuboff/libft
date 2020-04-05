#include "../libft.h"

void	ft_strdel(char **as)
{
	if (!as)
		return ;
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
