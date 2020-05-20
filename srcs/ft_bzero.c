#include "../libft.h"

/* man bzero: The bzero() function writes n zeroed bytes to the string s.
 * If n is zero, bzero() does nothing.
 * Функция создает строку размером n и заполняет ее нулями.
 * Я использую ранее сделанную функцию ft_memset
 * Просмотрите ft_memset чтобы понять, как это работает */


void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
