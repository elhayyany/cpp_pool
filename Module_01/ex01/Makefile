# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 16:31:38 by ael-hayy          #+#    #+#              #
#    Updated: 2022/05/26 16:33:12 by ael-hayy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	BrainzzzZ

CC			=	clang++

SRCS		=	main.cpp \
				Zombie.cpp \
				ZombieHorde.cpp

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

re: fclean all

.PHONY: clean fclean re
