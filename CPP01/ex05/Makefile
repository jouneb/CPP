# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 17:26:11 by jbouyer           #+#    #+#              #
#    Updated: 2022/10/05 17:26:53 by jbouyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Harl

FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Harl.cpp
HEADER = Harl.hpp
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