# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 11:19:51 by wsawatwa          #+#    #+#              #
#    Updated: 2022/05/29 23:50:38 by wsawatwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_calloc.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_split.c \
	ft_tolower.c \
	ft_toupper.c \

SRCB =	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstnew.c \
	ft_lstmap.c \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstlast.c \
	ft_lstsize.c \
	$(SRC)

OBJ = $(SRC:%.c=%.o)
OBJB = $(SRCB:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@echo "$(NAME) created"
		@ranlib $(NAME)
		@echo "$(NAME) indexed"

%.o: %.c
		@gcc $(FLAG) -c $< -o $@

clean:
		@rm -f $(OBJ)
		@rm -f $(OBJB)
		@echo "OBJ deleted"

fclean: clean
		@rm -f $(NAME)
		@echo "$(NAME) deleted"

re: fclean all

bonus: $(OBJB)
		@ar rc $(NAME) $(OBJB)
		@echo "$(NAME) created"
		@ranlib $(NAME)
		@echo "$(NAME) indexed"

.PHONY: all, clean, fclean, re
