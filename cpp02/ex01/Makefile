# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msulc <msulc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 11:37:46 by msulc             #+#    #+#              #
#    Updated: 2024/01/09 14:32:52 by msulc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BOLD =	\033[1m
GREEN =	\033[32m
RED =	\033[31m
NC =	\033[0m

NAME	=	fixed

CC	=	c++
CFLAGS	=	-Werror -Wextra -Wall -std=c++98

SRC		=	main.cpp \
			Fixed.cpp

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
	@echo "$(BOLD)Just type: ./fixed $(NC)"

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
