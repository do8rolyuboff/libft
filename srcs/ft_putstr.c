#include "../libft.h"

void	ft_putstr(char const *s)
{
	if (!s)
		return ;
	ft_putstr_fd(s, 1);
}
