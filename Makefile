# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 10:40:15 by moulmado          #+#    #+#              #
#    Updated: 2021/12/07 11:14:44 by moulmado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INC = ft_printf.h
SRCS = ft_itoa_u.c\
		ft_itoa.c\
		ft_printf.c\
		ft_put_hexa_lower.c\
		ft_put_hexa_upper.c\
		ft_putchar.c\
		ft_putptr.c\
		ft_putstr.c\
		ft_strlen.c\

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	ar -rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all