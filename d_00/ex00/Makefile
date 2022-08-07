NAME = megaphone

CC = g++

FLAGS = -Wall -Wextra -Werror

OPT_FLAG = -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

c98: $(SRCS)
	$(CC) $(FLAGS) $(OPT_FLAG) $(SRCS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) c98

re: fclean all
