# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 20:33:22 by mterkhoy          #+#    #+#              #
#    Updated: 2022/02/20 21:10:59 by mterkhoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC      = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =          Main.cpp \
				Contact.cpp \
				PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean :
		rm -rf $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
