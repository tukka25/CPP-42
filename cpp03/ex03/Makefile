NAME = DiamondTrap

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp    \
		ClapTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		DiamondTrap.cpp 


OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:fclean all