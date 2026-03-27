NAME = BraiiiiiiinnnzzzZ

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.o=.c)

CXX = c++
CXXFlags = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFlags) -o $@ $^

%.o: $(SRC)
	$(CXX) $(CXXFlags) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all
