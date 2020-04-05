#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

size_t				ft_strlen(const char *str);
size_t				ft_strnlen(const char *s, size_t maxlen);
size_t				ft_strlcat(char *dst, const char *src, size_t size);

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_wordcount(char *str);
int					ft_atoi(const char *str);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);

char				*ft_itoa(int n);
char				*ft_strtrim(char const *s);
char				*ft_strdup(const char *str);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *src, int ch);
char				**ft_strsplit(char const *s, char c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strndup(const char *src, size_t n);
char				*ft_strcat(char *dst, const char *app);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strstr(const char *str1, const char *str2);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strnstr(const char *str1, const char *str2, size_t c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);

void				ft_putnbr(int n);
void				ft_strclr(char *s);
void				ft_putchar(char c);
void				ft_revstr(char *c);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				*ft_strnew(size_t size);
void				ft_putstr(char const *s);
void				*ft_memalloc(size_t size);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_bzero(void *s, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_lstadd(t_list **alst, t_list *new);
void				*ft_memset(void *b, int c, size_t len);
void				ft_striter(char *s, void (*f)(char *));
void				*ft_memchr(const void *arr, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

#endif
