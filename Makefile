# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkulket <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 19:20:13 by tkulket           #+#    #+#              #
#    Updated: 2022/09/01 19:47:42 by tkulket          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

SRCSS = 	ft_calloc.c \
	ft_isascii.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_strdup.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_atoi.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_memcmp.c \
	ft_memset.c \
	ft_strjoin.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_substr.c 
SRC		= memset bzero memcpy memmove memchr memcmp strlen isalpha isdigit isalnum \
				isascii isprint toupper tolower strchr strrchr strncmp strlcpy strlcat strnstr \
				atoi calloc strdup substr \
				strjoin strtrim split itoa strmapi putchar_fd putstr_fd \
				putendl_fd putnbr_fd striteri

SRCA = $(addprefix ft_, $(SRC))

SRCS = $(addsuffix .c, $(SRCA))

#SRCSB

OBJS := $(SRCS:.c=.o)
all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
