# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 23:18:32 by wchen             #+#    #+#              #
#    Updated: 2023/11/04 17:25:39 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =  Harl

# COMPILE FLAGS
CXX		= c++
CXXFLAG	= -Wall -Wextra -Werror -std=c++98
SRCS	= Harl.cpp main.cpp
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
