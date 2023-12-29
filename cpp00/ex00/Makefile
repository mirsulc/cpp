# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msulc <msulc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 13:07:48 by msulc             #+#    #+#              #
#    Updated: 2023/12/15 14:48:01 by msulc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BOLD =	\033[1m
GREEN =	\033[32m
RED =	\033[31m
NC =	\033[0m

NAME =		megaphone

CC =		c++
CFLAGS = 	-Wall -Wextra -Werror -std=c++98

SRC = 		megaphone.cpp

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