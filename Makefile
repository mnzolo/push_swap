# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/21 08:48:28 by mnzolo            #+#    #+#              #
#    Updated: 2019/08/23 17:24:33 by mnzolo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap

NAME2 = checker

SRCS1 = push_swap_main.c

SRCS2 = checker1.c

OBJECTS = checker1.o push_swap_main.o

flags = -Wall -Wextra -Werror

all : $(NAME1)

$(NAME1) :
	cd libft && make
	gcc -c $(flags) $(SRCS1) libft/libft.a
	gcc -c $(flags) $(SRC2) libft/libft.a

clean :
	cd libft && make clean
	/bin/rm -f $(NAME1) $(NAME2) 

fclean : clean
	cd libft && make fclean
	/bin/rm -f $(NAME1) $(NAME2)

re : fclean all
	cd libft && make
	gcc -c $(flags) $(SRCS1) libft/libft.a
	gcc -c $(flahs) $(SRCS2) libft/libft.a
