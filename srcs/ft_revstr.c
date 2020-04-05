#include "../libft.h"

void		ft_revstr(char *c)
{
	char	*z;
	char	a;

	z = c + ft_strlen(c) - 1;
	while (c < z)
	{
		a = *c;
		*c++ = *z;
		*z-- = a;
	}
}
