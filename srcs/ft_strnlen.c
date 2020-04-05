#include "../libft.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && i != maxlen)
		i++;
	return (i);
}
