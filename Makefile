# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkulket <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 19:20:13 by tkulket           #+#    #+#              #
#    Updated: 2022/09/20 21:32:02 by tkulket          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

SRC		= 		ft_memset.c ft_bzero.c ft_memcpy.c\
				ft_memmove.c ft_memchr.c ft_memcmp.c\
				ft_strlen.c ft_isalpha.c ft_isdigit.c\
				ft_isalnum.c ft_isascii.c ft_isprint.c\
				ft_toupper.c ft_tolower.c ft_strchr.c\
				ft_strrchr.c ft_strncmp.c ft_strlcpy.c\
				ft_strlcat.c ft_strnstr.c ft_atoi.c\
				ft_calloc.c ft_strdup.c ft_substr.c\
				ft_strjoin.c ft_strtrim.c ft_split.c\
				ft_itoa.c ft_strmapi.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c


BONUS	= 		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS := $(SRC:.c=.o)
BONUS_OBJS := $(BONUS:.c=.o)

all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus:$(NAME) $(BONUS_OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) $(bonus) 

re: fclean all

.PHONY : all bonus clean fclean re
