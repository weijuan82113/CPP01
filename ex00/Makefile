# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 20:52:27 by wchen             #+#    #+#              #
#    Updated: 2023/08/21 21:42:19 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

# COMPILE FLAGS
CC		= c++
CFLAG	= -Wall -Wextra -Werror -std=c++98
SRCS	= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
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
