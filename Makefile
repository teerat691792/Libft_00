# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkulket <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 19:20:13 by tkulket           #+#    #+#              #
#    Updated: 2022/08/29 00:48:25 by tkulket          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

SRCS = ft_strlen.c ft_isprint.c

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
