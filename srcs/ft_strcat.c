#include "../libft.h"

char		*ft_strcat(char *dst, const char *app)
{
	char	*slt;

	slt = dst;
	while (*slt != '\0')
		slt++;
	while (*app != '\0')
	{
		*slt = *app;
		slt++;
		app++;
	}
	*slt = '\0';
	return (dst);
}
