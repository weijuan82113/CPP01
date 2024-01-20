# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 20:22:33 by wchen             #+#    #+#              #
#    Updated: 2024/01/19 20:52:31 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

# COMPILE FLAGS
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean 	:
	rm -rf $(OBJS)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
