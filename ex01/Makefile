# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 19:20:49 by wchen             #+#    #+#              #
#    Updated: 2023/08/26 17:41:17 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

# COMPILE FLAGS
CC		= c++
CFLAG	= -Wall -Wextra -Werror -std=c++98
SRCS	= Zombie.cpp zombieHorde.cpp main.cpp
OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $@

clean 	:
	rm -rf $(OBJS)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
