# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edoll <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 20:02:29 by edoll             #+#    #+#              #
#    Updated: 2019/09/08 21:10:01 by edoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = *.c
HEADER = *.h

all: $(NAME)
	gcc - Wall -Wextra -Werror $(SRC) -I $(HEADER) -o $(NAME)

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
