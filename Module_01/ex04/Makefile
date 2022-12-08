# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 11:04:07 by ael-hayy          #+#    #+#              #
#    Updated: 2022/05/27 13:58:15 by ael-hayy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	replace

CC			=	clang++

SRCS		=	main.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
	
clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)
frep:
	rm *.replace

re: fclean all

.PHONY: clean fclean re
