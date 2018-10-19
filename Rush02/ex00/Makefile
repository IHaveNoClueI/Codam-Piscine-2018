#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lvan-vlo <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2018/10/14 15:08:32 by lvan-vlo      #+#    #+#                  #
#    Updated: 2018/10/14 21:52:13 by svan-win      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = colle-2

SRCS = *.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Werror -Wextra *.c

clean:
	rm -f *~ 

fclean: clean
	rm -f $(NAME)

re: fclean all