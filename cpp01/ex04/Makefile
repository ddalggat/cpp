SRCS	=	main.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	replace

CFLAGS	=	-Wall -Wextra -Werror

CC		=	clang++

STD		=	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(STD) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp
			$(CC) $(STD) $(CFLAGS) -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			${RM} *.replace

re:			fclean all

.PHONY:		all clean fclean re