# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 11:13:35 by plavaux           #+#    #+#              #
#    Updated: 2014/11/23 19:49:05 by plavaux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_inspect_file

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC =	src/*.c
INC =	-I includes/
OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $? $(SRC) $(LIBFT) $(INC) -o $(NAME)
	@echo "\033[32mCompiled $(NAME).\033[0m"

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[32mCleaned up object files.\033[0m"

fclean: clean
	@/bin/rm $(NAME)
	@echo "\033[32mCleaned up compiled files.\033[0m"

re: fclean all

.PHONY: all clean fclean re
