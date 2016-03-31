# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/31 12:41:46 by tgauvrit          #+#    #+#              #
#    Updated: 2016/03/31 13:03:03 by tgauvrit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			Colleen Grace Sully

CC =			clang

FLAGS =			-Wall -Werror -Wextra

all: $(NAME)

$(NAME): %: %.c
	$(CC) $(FLAGS) -o $@ $<

clean:
	@echo "\033[31mNo object files are created by this Makefile\033[0m"

fclean: clean
	-/bin/rm -f $(NAME)

re: fclean all