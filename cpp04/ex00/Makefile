NAME = Animal

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS =	main.cpp    \
		Animal.cpp  \
		WrongAnimal.cpp \
		Dog.cpp         \
		Cat.cpp         \
		WrongDog.cpp    \
		WrongCat.cpp    


OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:fclean all