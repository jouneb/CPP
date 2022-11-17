# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 15:50:11 by jbouyer           #+#    #+#              #
#    Updated: 2022/11/17 17:32:44 by jbouyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Conversion

FLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp
HEADER = Base.hpp A.hpp B.hpp C.hpp
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