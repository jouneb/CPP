# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 16:10:56 by jbouyer           #+#    #+#              #
#    Updated: 2022/11/07 14:59:35 by jbouyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Animal

FLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
HEADER = Animal.hpp Dog.hpp Cat.hpp Brain.hpp
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