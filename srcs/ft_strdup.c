#include "../libft.h"

char		*ft_strdup(const char *str)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
