#include "../libft.h"

void		*ft_strnew(size_t size)
{
	char	*s;

	if (size > size + 1)
		return (NULL);
	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
