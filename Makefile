# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/21 08:48:28 by mnzolo            #+#    #+#              #
#    Updated: 2019/08/26 12:31:53 by mnzolo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap

NAME2 = checker

SRCS1 = push_swap_main.c

SRCS2 = checker1.c

flags = -Wall -Wextra -Werror

all : $(NAME1)

$(NAME1) :
	cd libft && make
	gcc  $(flags) -o $(NAME1) $(SRCS1) libft/libft.a
	gcc  $(flags) -o $(NAME2) $(SRCS2) libft/libft.a

clean :
	cd libft && make clean
	/bin/rm -f $(NAME1) $(NAME2) 

fclean :
	cd libft && make fclean
	/bin/rm -f $(NAME1) $(NAME2)

re : fclean all
