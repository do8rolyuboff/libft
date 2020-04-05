#include "../libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
