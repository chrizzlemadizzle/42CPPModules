NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

CXX = c++
CXXFlags = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFlags) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFlags) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all



