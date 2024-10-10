NAME		= Game_of_life

SRC_FILES	= main.c 

OBJS_DIR	= .objets

OBJS		= $(SRC_FILES:%.cpp=$(OBJS_DIR)/%.o)

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME)
	
re : fclean all

.PHONY: all clean fclean re%