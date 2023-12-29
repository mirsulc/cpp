# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msulc <msulc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 10:22:58 by msulc             #+#    #+#              #
#    Updated: 2023/12/27 10:33:15 by msulc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BOLD =	\033[1m
GREEN =	\033[32m
RED =	\033[31m
NC =	\033[0m

NAME =		account

CC =		c++
CFLAGS = 	-Wall -Wextra -Werror -std=c++98

SRC = 		tests.cpp \
			Account.cpp 

all: $(NAME)

$(NAME):
	@sleep 0.5
	@echo "\033[1J\033[1;1H"
	@echo "$(BOLD)Compiling ... $(NC)"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@sleep 0.5
	@echo "\033[1J\033[1;1H"
	@echo "$(BOLD)Program is ready!$(NC)"

clean:
	@echo "\033[1J\033[1;1H"
	@echo "$(LIGHT)$(RED)Removing program$(NC)"
	@rm -f $(NAME)

fclean:
	@echo "\033[1J\033[1;1H"
	@echo "$(LIGHT)$(RED)Removing program$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean