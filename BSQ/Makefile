# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: IHaveNoClueI <marvin@codam.nl>                    +#+                      #
#                                                    +#+                       #
#    Created: 2018/10/15 11:00:57 by IHaveNoClueI       #+#    #+#                  #
#    Updated: 2018/10/15 11:01:01 by IHaveNoClueI       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = *.c

OBJECTS = *.o

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror *.c

clean:
	/bin/rm -f $(OBJECTS)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
