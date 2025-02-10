#nom de l'executable
NAME = ex00

#compilateur
CC = c++

#flags
FLAGS = -Wall -Wextra -Werror -std=c++98

#fichiers sources
SRCS = ClapTrap.cpp \
	main.cpp \

#objets
OBJS = $(SRCS:.cpp=.o)


#compilation
all: $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all