# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 20:33:22 by mterkhoy          #+#    #+#              #
#    Updated: 2022/04/27 20:41:05 by mterkhoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex

CC      = c++
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS =          main.cpp \
				Bureaucrat.cpp \
				Form.cpp \

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
