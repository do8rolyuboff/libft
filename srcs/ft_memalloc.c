#include "../libft.h"

void		*ft_memalloc(size_t size)
{
	void	*magic;

	magic = malloc(size);
	if (magic)
		ft_bzero(magic, size);
	return (magic);
}
