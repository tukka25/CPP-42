NAME = Bureaucrat

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp    \
		Bureaucrat.cpp \


OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:fclean all