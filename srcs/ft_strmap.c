#include "../libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*blank;
	size_t	i;

	if (!s || !f)
		return (NULL);
	if (!(blank = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		blank[i] = (*f)(s[i]);
		i++;
	}
	blank[i] = '\0';
	return (blank);
}
