# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 09:39:12 by ehossain          #+#    #+#              #
#    Updated: 2024/11/26 11:47:18 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE: ft_printf.c ft_putchar.c ft_putstr.c 

NAME: libftprintf.a
OBJECT: ${SOURCE:.c=.o}
CC: gcc
CFLAGS: -Wall -Wextra -Werror

${NAME} : $(OBJECT)
	$(CC) $(CFLAGS) $(NAME) $(SOURCE)
%.o: %.c
	i
CLEAN:
	rm -f *.o
