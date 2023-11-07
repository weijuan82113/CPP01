# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 20:22:33 by wchen             #+#    #+#              #
#    Updated: 2023/11/04 17:23:49 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

# COMPILE FLAGS
CXX		= c++
CXXFLAG	= -Wall -Wextra -Werror -std=c++98
SRCS	= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $@

clean 	:
	rm -rf $(OBJS)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
