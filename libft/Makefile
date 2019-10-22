# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 11:38:04 by mnzolo            #+#    #+#              #
#    Updated: 2019/08/26 12:31:16 by mnzolo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_strsplit.c ft_itoa.c ft_strtrim.c ft_putnbr.c ft_putendl.c ft_putstr.c ft_strclr.c ft_strnew.c ft_isdigit.c	ft_putchar.c ft_striteri.c ft_strnstr.c ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strrchr.c ft_memalloc.c ft_strcat.c ft_strlcat.c ft_strstr.c ft_memccpy.c	ft_strchr.c ft_strlen.c ft_strsub.c ft_atoi.c ft_memchr.c ft_strcmp.c ft_strmap.c ft_tolower.c ft_bzero.c ft_memcmp.c ft_strcpy.c ft_strncat.c ft_toupper.c ft_isalnum.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_isalpha.c ft_memmove.c	ft_strequ.c	ft_strncpy.c ft_isascii.c ft_memset.c ft_striter.c ft_strnequ.c ft_strmapi.c ft_memdel.c ft_strdel.c ../push.c ../isempty.c ../swapalg.c ../print.c ../find_min_loc.c ../instruct.c ../ft_lstlen.c ../rotate.c ../rrotate.c ../plus.c ../sort_3.c ../sort_2.c ../sort_5.c ../ischeck.c ../s_chunk.c ../delete_n.c ../sorted.c ../generate.c ../push_ab.c ../ismax.c ../get_next_line.c ../do_stack.c ../ft_atol.c ../create.c ../sort_4.c ../find_ch2.c ../create2.c ../check_create.c ../checking.c

OBJECTS = ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_strsplit.o ft_itoa.o ft_strtrim.o ft_putnbr.o ft_putendl.o ft_putstr.o ft_strclr.o ft_strnew.o ft_atoi.o	ft_memcmp.o	ft_strdup.o	ft_strncpy.o ft_bzero.o ft_memcpy.o	ft_strequ.o	ft_strnequ.o ft_isalnum.o ft_memmove.o ft_striter.o	ft_strnstr.o ft_isalpha.o ft_memset.o ft_striteri.o ft_strrchr.o ft_isascii.o ft_putchar.o ft_strjoin.o	ft_strstr.o ft_isdigit.o ft_putchar_fd.o ft_strlcat.o ft_strsub.o ft_isprint.o ft_strcat.o ft_strlen.o ft_tolower.o ft_memalloc.o ft_strchr.o ft_strmap.o ft_toupper.o ft_memccpy.o	ft_strcmp.o	ft_strncat.o ft_memchr.o ft_strcpy.o ft_strncmp.o ft_strmapi.o ft_memdel.o ft_strdel.o push.o ft_lstlen.o rotate.o rrotate.o plus.o instruct.o find_min_loc.o  print.o swapalg.o isempty.o push.o sort_3.o sort_2.o sort_5.o ischeck.o s_chunk.o delete_n.o sorted.o generate.o push_ab.o ismax.o get_next_line.o do_stack.o ft_atol.o create.o sort_4.o find_ch2.o create2.o check_create.o checking.o

flags = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : 
	gcc -c $(flags) $(SRCS)
	ar rc $(NAME) $(OBJECTS)

clean : 
	/bin/rm -f $(OBJECTS)

fclean : clean 
	/bin/rm -f $(NAME) $(OBJECTS)
	
re : fclean all
	gcc -c $(Flags) $(SRCS)
