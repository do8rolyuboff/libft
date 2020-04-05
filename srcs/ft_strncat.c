#include "../libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (i < n && src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
