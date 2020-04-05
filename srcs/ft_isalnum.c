#include "../libft.h"

int		ft_isalnum(int c)
{
	return (('0' <= c && c <= '9') || ('a' <= c && c <= 'z')
	|| ('A' <= c && c <= 'Z'));
}
