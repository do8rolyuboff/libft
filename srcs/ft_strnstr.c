#include "../libft.h"

char		*ft_strnstr(const char *str1, const char *str2, size_t c)
{
	size_t	i;
	size_t	len;
	char	*l;
	char	*s;

	if (*str2 == '\0')
		return ((char *)str1);
	l = (char *)str1;
	s = (char *)str2;
	i = 0;
	len = ft_strlen(s);
	while (l[i] != '\0' && (i + len) <= c)
	{
		if (ft_strncmp((l + i), s, len) == 0)
			return (l + i);
		i++;
	}
	return (NULL);
}
