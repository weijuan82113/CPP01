# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 20:27:42 by wchen             #+#    #+#              #
#    Updated: 2024/01/19 20:55:21 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace

# COMPILE FLAGS
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp replace.cpp
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
