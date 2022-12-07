# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 08:48:15 by jlima             #+#    #+#              #
#    Updated: 2022/12/07 10:29:42 by jlima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#//= Colors =//#
BOLD	:= \033[1m
BLACK	:= \033[30;1m
RED		:= \033[31;1m
GREEN	:= \033[32;1m
YELLOW	:= \033[33;1m
BLUE	:= \033[34;1m
MAGENTA	:= \033[35;1m
CYAN	:= \033[36;1m
WHITE	:= \033[37;1m
RESET	:= \033[0m

NAME 		= Animal

INCLUDES	= -I includes

CC++		= c++
C++FLAGS	= -Wall -Wextra -Werror -std=c++98
MAKE		= make

DIR_SRCS	= ./srcs/
DIR_OBJS	= ./srcs/

SRCS_FILES	= main Animal Cat Dog WrongAnimal WrongCat Brain

OBJS		= $(addprefix $(DIR_OBJS), $(addsuffix .o, $(SRCS_FILES)))

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC++) $(C++FLAGS) -o $(NAME) $(OBJS)
			@echo "$(MAGENTA)$(BOLD)Executable created!$(RESET)"

$(DIR_OBJS)%.o :	$(DIR_SRCS)%.cpp
			$(CC++) $(CFLAGS) $(INCLUDES) -c  $< -o $@ 

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -f $(NAME)	

re:			fclean all

.PHONY: 	all clean fclean re
