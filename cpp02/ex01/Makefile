#first parts 
SRC := main.cpp Fixed.cpp

CC = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

VALGFLGS = --vgdb=full \
		 --leak-check=full \s
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose
         #--log-file=valgrind-out.txt

HEADERs = Fixed.hpp

OBJ := $(SRC:%.cpp=%.o)

NAME = fixed

%.o : %.cpp
	@echo "compiling ..."
	$(CC) $(FLAGS) -c $<

all :$(NAME)

$(NAME): $(OBJ)
	@echo "compiling ..."
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)


clean:
	@echo "cleaning all objects"
	@rm -rf *.o

fclean: clean
	@echo "cleaning every thing ..."
	@rm -f $(NAME)

re: fclean all

valgrind: $(NAME)
	@valgrind $(VALGFLGS) ./$(NAME) $(TARGS)

.PHONY: all clean fclean bonus so re test

#&.c : &.o libft.a 
