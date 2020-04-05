#include "../libft.h"

int			ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i])
	{
		str1++;
		str2++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
