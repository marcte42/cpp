# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 20:33:22 by mterkhoy          #+#    #+#              #
#    Updated: 2022/04/02 13:24:50 by mterkhoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex

CC      = g++
CFLAGS = -g -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS =          main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				DiamondTrap.cpp \

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
