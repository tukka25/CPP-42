NAME = Account

SRCS =	tests.cpp   \
		Account.cpp 

CC = c++

CPPFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean 
	rm -rf $(NAME)
re:fclean all