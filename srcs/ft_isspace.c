#include "../libft.h"

int			ft_isspace(int c)
{
	return ((c == ' ' || c == '\t' || c == '\v' ||
	c == '\n' || c == '\f' || c == '\r'));
}
