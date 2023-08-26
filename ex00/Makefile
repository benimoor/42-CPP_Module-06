NAME = converter

CC = c++
OBJS_DIR = obj
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = $(wildcard ./*.cpp)
OBJS = $(patsubst ./%.cpp, $(OBJS_DIR)/%.o, $(SRCS))

RM = rm -rf
MKDIR = mkdir -p

.DEFAULT_GOAL = all

# Define colors
GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[0;33m
NC = \033[0m

# Define emoji icons
CHECKMARK = ✅
CROSSMARK = ❌
TRASH = 🗑️
RECYCLE = ♻️

$(OBJS_DIR)/%.o: ./%.cpp | $(OBJS_DIR)
	@$(CC) $(FLAGS) -c $< -o $@
	@printf "\r${YELLOW}Compiling... ${GREEN}[====]${CHECKMARK}${NC}"

$(OBJS_DIR):
	@$(MKDIR) $(OBJS_DIR)

all: $(NAME)

$(NAME): $(OBJS) | $(OBJS_DIR)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@printf "\n${YELLOW}Executable file created...${NC}\n"

clean:
	@$(RM) $(OBJS_DIR)
	@printf "${YELLOW}Cleaning object files... ${GREEN}[======]${TRASH}${NC}\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "${YELLOW}Removing executable file... ${GREEN}[======]${TRASH}${NC}\n"

re: fclean all
	@printf "${YELLOW}Rebuilding... ${GREEN}[======]${RECYCLE}${NC}\n"

.PHONY: all clean fclean re