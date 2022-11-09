# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 15:35:50 by jbouyer           #+#    #+#              #
#    Updated: 2022/11/09 15:47:41 by jbouyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucratie

FLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = main.cpp Bureaucrat.cpp Form.cpp
HEADER = Bureaucrat.hpp Form.hpp
OBJ	=	${SRC:.cpp=.o}

all: $(NAME)

$(NAME):$(OBJ)
		c++ -o $(NAME) $(OBJ) $(FLAGS)

%.o : %.cpp $(HEADER)
		c++ $(FLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ)

fclean :
		rm -rf $(NAME) $(OBJ)

re : fclean
	make all

.PHONY: all clean fclean re 