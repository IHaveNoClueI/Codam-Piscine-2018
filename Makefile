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
