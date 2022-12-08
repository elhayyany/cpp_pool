# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 15:02:17 by ael-hayy          #+#    #+#              #
#    Updated: 2022/06/02 15:02:41 by ael-hayy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harlFilter

CC			=	clang++

SRCS		=	main.cpp Harl.cpp

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
