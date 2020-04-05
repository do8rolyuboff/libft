#include "../libft.h"

void				*ft_memchr(const void *arr, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)arr;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)arr + i);
		i++;
	}
	return (NULL);
}
