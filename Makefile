# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkulket <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 19:20:13 by tkulket           #+#    #+#              #
#    Updated: 2022/09/19 03:33:45 by tkulket          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

SRC		= 		memset bzero memcpy\
				memmove memchr memcmp\
				strlen isalpha isdigit isalnum\
				isascii isprint toupper\
				tolower strchr strrchr\
				strncmp strlcpy strlcat strnstr\
				atoi calloc strdup substr\
				strjoin strtrim split itoa strmapi\
				putchar_fd putstr_fd \
				putendl_fd putnbr_fd striteri



SRCA = $(addprefix ft_, $(SRC))
SRCB = $(addsuffix .c, $(SRCA))

OBJS := $(SRCB:.c=.o)


BONUS	= 		lstnew lstadd_front lstsize lstlast\
				lstadd_back lstdelone lstclear\
				lstiter lstmap

BNSA = $(addprefix ft_, $(BONUS))
BNSB = $(addsuffix .c, $(BNSA))

BONUS_OBJS := $(BNSB:.c=.o)

all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus:$(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re
