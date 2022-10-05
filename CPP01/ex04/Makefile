# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 14:04:02 by jbouyer           #+#    #+#              #
#    Updated: 2022/10/05 15:40:01 by jbouyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp 
HEADER = 
OBJ	=	${SRC:.cpp=.o}

all: $(NAME)

$(NAME):$(OBJ)
		c++ -o $(NAME) $(OBJ) $(FLAGS)

%.o : %.cpp $(HEADER)
		c++ $(FLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ)

fclean :
		rm -rf $(NAME) $(OBJ) *.replace

re : fclean
	make all

.PHONY: all clean fclean re 