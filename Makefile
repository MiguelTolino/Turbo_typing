# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguel <miguel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 17:35:18 by miguel            #+#    #+#              #
#    Updated: 2020/02/24 17:42:32 by miguel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Turbo_Typing
CC = gcc
SRCS = *.c

all: $(NAME)
$(NAME): 
			$(CC) $(SRCS) -o $(NAME)
clean:
		rm $(NAME)
debug:
			$(CC) $(SRCS) -g -o $(NAME)
			
.PHONY:  clean re debug
