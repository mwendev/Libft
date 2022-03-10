# Libft

## Info

Remake of some useful C functions.

- Grade: 115/100
- Keywords: Unix logic
- Skills: Imperative programming/ Rigor/ Algorithms & AI


## How to install and use

- Clone libft into your project folder

```sh
git clone https://github.com/mwendev/Libft.git
```

- Run make inside libft folder (make rules: all, clean, fclean, re)

```sh
make
```

- Include libft.h in the header of your C files

```c
#include <libft.h>
```

- compile the library with your C files

```sh
gcc (...)(.c files) -o (executable name) ./libft/libft.a -I ./libft/inc
```

## List of functions


### Dynamic memory allocation
- ft_calloc

### To work with char
- ft_isalnum
- ft_isalpha
- ft_isascii
- ft_isdigit
- ft_isprint
- ft_tolower
- ft_toupper

### To work with string
- ft_bzero
- ft_itoa
- ft_atoi
- ft_memccpy
- ft_memchr
- ft_memcmp
- ft_memcpy
- ft_memmove
- ft_memset
- ft_split
- ft_strchr
- ft_strdup
- ft_strjoin
- ft_strlcat
- ft_strlcpy
- ft_strlen
- ft_strmapi
- ft_strncmp
- ft_strnstr
- ft_strrchr
- ft_strtrim
- ft_substr

### To print on file descriptors
- ft_putchar_fd
- ft_putendl_fd
- ft_putnbr_fd
- ft_putstr_fd

### Singly linked list
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap
