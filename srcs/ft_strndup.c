#include "../libft.h"

char		*ft_strndup(const char *src, size_t n)
{
	char	*blank;

	if (!(blank = ft_strnew(n)))
		return (NULL);
	ft_strncpy(blank, src, n);
	return (blank);
}
