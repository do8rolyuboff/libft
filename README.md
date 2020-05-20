# Libft - @21born2code
![Screenshot intra](https://github.com/do8rolyuboff/Libft/blob/master/other/screenshot.jpeg)

## Что такое Libft?
[LIBFT](https://github.com/do8rolyuboff/Libft/blob/master/other/libft.en.pdf) - это первый проект сделаный мной в рамках обучения в [21school](https://21-school.ru/). Для успешной сдачи проекта необходимо перекодировать некоторые функции стандартных библиотек Cи, для более глубокого понимания их работы. В [21school](https://21-school.ru/) не разрешается использовать большинство библиотек в проектах, поэтому необходимо продолжать расширять собственную библиотеку.

## Что в Libft?

Есть 3 раздела:

1.  **Libc Functions:** Функции из стандартных библиотек Cи
2.  **Additional functions:** Функции, которые будут полезны для будующих проектов
3.  **Bonus Functions:** Функции, которые будут полезны для манипулирования связным списком

## List of functions
Libc functions | Additional functions | Bonus Functions
:-----------: | :-----------: | :-----------:
  [ft_memset](srcs/ft_memcmp.c)   | [ft_memalloc](srcs/ft_memalloc)       | [ft_lstnew](srcs/ft_lstnew) 
  [ft_bzero](srcs/ft_bzero)       | [ft_memdel](srcs/ft_memdel)           | [ft_lstdelone](srcs/ft_lstdelone) 
  [ft_memcpy](srcs/ft_memcpy)     | [ft_strnew](srcs/ft_strnew)           | [ft_lstdel](srcs/ft_lstdel) 
  [ft_memccpy](srcs/ft_memccpy)   | [ft_strdel](srcs/ft_strdel)           | [ft_lstdel](srcs/ft_lstdel) 
  [ft_memmove](srcs/ft_memmove)   | [ft_strclr](srcs/ft_strclr)           | [ft_lstadd](srcs/ft_lstadd) 
  [ft_memchr](srcs/ft_memchr)     | [ft_striter](srcs/ft_striter)         | [ft_lstiter](srcs/ft_lstiter) 
  [ft_memcmp](srcs/ft_memcmp)     | [ft_striteri](srcs/ft_striteri)       | [ft_lstmap](srcs/ft_lstmap) 
  [ft_strlen](srcs/ft_strlen)     | [ft_strmap](srcs/ft_strmap)           |
  [ft_strdup](srcs/ft_strdup)     | [ft_strmapi](srcs/ft_strmapi)         |
  [ft_strcpy](srcs/ft_strcpy)     | [ft_strequ](srcs/ft_strequ)           |
  [ft_strncpy](srcs/ft_strncpy)   | [ft_strnequ](srcs/ft_strnequ)         |
  [ft_strcat](srcs/ft_strcat)     | [ft_strsub](srcs/ft_strsub)           |
  [ft_strncat](srcs/ft_strncat)   | [ft_strjoin](srcs/ft_strjoin)         |
  [ft_strlcat](srcs/ft_strlcat)   | [ft_strtrim](srcs/ft_strtrim)         |
  [ft_strchr](srcs/ft_strchr)     | [ft_strsplit](srcs/ft_strsplit)       |
  [ft_strrchr](srcs/ft_strrchr)   | [ft_itoa](srcs/ft_itoa)               |
  [ft_strstr](srcs/ft_strstr)     | [ft_putchar](srcs/ft_putchar)         |
  [ft_strnstr](srcs/ft_strnstr)   | [ft_putstr](srcs/ft_putstr)           |
  [ft_strcmp](srcs/ft_strcmp)     | [ft_putendl](srcs/ft_putendl)         |
  [ft_strncmp](srcs/ft_strncmp)   | [ft_putnbr](srcs/ft_putnbr)           |
  [ft_atoi](srcs/ft_atoi)         | [ft_putchar_fd](srcs/ft_putchar_fd)   |
  [ft_isalpha](srcs/ft_isalpha)   | [ft_putstr_fd](srcs/ft_putstr_fd)     |
  [ft_isdigit](srcs/ft_isdigit)   | [ft_putendl_fd](srcs/ft_putendl_fd)   |
  [ft_isalnum](srcs/ft_isalnum)   | [ft_putnbr_fd](srcs/ft_putnbr_fd)     |
  [ft_isascii](srcs/ft_isascii)   | |
  [ft_isprint](srcs/ft_isprint)   | |
  [ft_toupper](srcs/ft_toupper)   | |
  [ft_tolower](srcs/ft_tolower)   | |


## Как это работает?

`git clone https://github.com/do8rolyuboff/Libft.git`

`cd libft`

`make`
  
Makefile скомпилирует объектные файлы (.o) и libft.a (это и есть библиотека).
