# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwen <mwen@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 12:00:25 by mwen              #+#    #+#              #
#    Updated: 2022/03/10 13:53:27 by mwen             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

SRCS_PATH		=	src/
OBJS_PATH		=	obj/
INCS_PATH		=	inc/

SRC				=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memccpy.c \
					ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c \
					ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
					ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
					ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstnew.c ft_lstsize.c ft_lstmap.c
SRCS			=	$(addprefix $(SRCS_PATH), $(SRC))

OBJ				=	$(SRC:%.c=%.o)
OBJS			=	$(addprefix $(OBJS_PATH), $(OBJ))

RM				= 	rm -rf
CFLAGS			=	-Wall -Werror -Wextra

.SILENT:

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $@ $^
				printf '\033[32m[ ✔ ] %s\n\033[0m' "Created libft.a"

./obj/%.o:		./src/%.c
				mkdir -p obj
				gcc -c $(CFLAGS) $< -o $@ -I $(INCS_PATH)

clean:
				$(RM) $(OBJS_PATH)
				printf '\033[31m[ ✔ ] %s\n\033[0m' "Cleaned libft.a"

fclean:			clean
				$(RM) $(NAME)
				printf '\033[31m[ ✔ ] %s\n\033[0m' "Fcleaned libft.a"

re:				fclean all

.PHONY:			all %.o clean fclean re
