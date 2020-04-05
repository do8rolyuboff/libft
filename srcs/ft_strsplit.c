#include "../libft.h"

static int	get_word_number(char const *s, char c)
{
	int		i;
	int		count;

	if (s[0] == '\0')
		return (0);
	count = 0;
	if (s[0] != c)
		count++;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	get_word_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static char	**free_mem(char **arr, int i)
{
	arr[i] = NULL;
	while (i--)
		free(arr[i]);
	free(arr);
	return (NULL);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**tab;
	int		word_number;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	word_number = get_word_number(str, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (word_number + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_number)
	{
		while (str[j] != '\0' && str[j] == c)
			j++;
		tab[i] = ft_strsub(str, j, get_word_len(str + j, c));
		if (tab[i] == NULL)
			return (tab = free_mem(tab, i));
		while (str[j] != '\0' && str[j] != c)
			j++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
