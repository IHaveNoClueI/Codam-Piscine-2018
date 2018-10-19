# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: IHaveNoClueI <marvin@codam.nl>                    +#+                      #
#                                                    +#+                       #
#    Created: 2018/10/13 13:54:30 by IHaveNoClueI       #+#    #+#                  #
#    Updated: 2018/10/13 13:54:33 by IHaveNoClueI       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./*.c

OBJS = ./*.o

INCLUDES = ./includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I$(INCLUDES)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
