NAME = PhoneBook

SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

CXX = c++
CXXFLags = -Wall -Werror -Wextra -std=c++98 -I.

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLags) -o $@ $^

%.o: %.cpp
	$(CC) $(CXXFLags) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all
