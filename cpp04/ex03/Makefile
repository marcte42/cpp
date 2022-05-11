# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mterkhoy <mterkhoy@42.stud.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 20:33:22 by mterkhoy          #+#    #+#              #
#    Updated: 2022/05/11 14:26:49 by mterkhoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex

CC      = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =          main.cpp \
				AMateria.cpp \
				Character.cpp \
				Ice.cpp \
				Cure.cpp \
				MateriaSource.cpp \

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
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
