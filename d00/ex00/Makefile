# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wvaara <wvaara@hive.fi>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 13:55:05 by wvaara            #+#    #+#              #
#    Updated: 2021/10/04 14:37:18 by wvaara           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = clang++ -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJECTS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS): $(SRCS)

$(SRCS):
	$(CFLAGS) -c $(SRCS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
