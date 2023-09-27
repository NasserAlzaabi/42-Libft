# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 14:30:40 by naalzaab          #+#    #+#              #
#    Updated: 2023/02/02 19:25:26 by naalzaab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isdigit.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_isalnum.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_isascii.c\
		ft_isprint.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c ft_atoi.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c\
		ft_memmove.c ft_memcmp.c ft_memchr.c ft_calloc.c ft_strdup.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_itoa.c \
		

OBJ = $(SRC:.c=.o)


SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

OBJB = $(SRCB:.c=.o)

CC = gcc

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJB)
	ar -rcs $(NAME) $(OBJ) $(OBJB)

.PHONY: all clean fclean all