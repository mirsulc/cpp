# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msulc <msulc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 09:05:46 by msulc             #+#    #+#              #
#    Updated: 2024/02/07 10:45:53 by msulc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BOLD =	\033[1m
GREEN =	\033[32m
RED =	\033[31m
NC =	\033[0m

NAME	=	serialize

CC	=	c++
CFLAGS	=	-Werror -Wextra -Wall -Wshadow -std=c++98 
#the -Wshadow flag checks if we dont use variables of the same name

SRC		=	main.cpp \
			Serializer.cpp			
			

OBJ		=	$(SRC:.cpp=.o)

$(VERBOSE).SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[1J\033[1;1H"
	@echo "$(BOLD)Compiling . $(NC)"
	@sleep 0.4
	@echo "\033[1J\033[1;1H"
	@echo "$(BOLD)Compiling .. $(NC)"
	@sleep 0.4
	@echo "\033[1J\033[1;1H"
	@echo "$(BOLD)Compiling ... $(NC)"
	$(CC) $(CFLAGS) $(OBJ) -o $@ -I .
	@sleep 0.5
	@echo "\033[1J\033[1;1H"
	@echo "$(BOLD)Program is ready!$(NC)"
	@sleep 0.5
	@echo "$(BOLD)Just type: ./serialize $(NC)"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:	
	@echo "\033[1J\033[1;1H"
	@echo "$(LIGHT)$(RED)Removing o files$(NC)"
	rm -f *.o

fclean: clean
	@echo "\033[1J\033[1;1H"
	@echo "$(LIGHT)$(RED)Removing program$(NC)"
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
