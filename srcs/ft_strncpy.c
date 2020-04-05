#include "../libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = n;
	while (a != n && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
		b--;
	}
	while (b != 0)
	{
		dst[a] = '\0';
		a++;
		b--;
	}
	return (dst);
}
