# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 15:48:03 by jbouyer           #+#    #+#              #
#    Updated: 2022/11/25 15:48:26 by jbouyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Executable

FLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = main.cpp
HEADER = MutantStack.hpp
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