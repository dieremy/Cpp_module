#PROGRAM
NAME = serialize

#FILES
SRCS= main.cpp \
	  Serialize.cpp

OBJS = ${SRCS:.cpp=.o}

#COMPILE
CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

#COLORS
VIOLET = \033[0;94m
CYAN = \033[0;36m
NONE = \033[0m

#RULEZ
%.o : %.cpp
	@${CC} ${FLAG} -c $< -o $@
	@echo "${VIOLET}WIP...${NONE}"

${NAME} : ${OBJS}
	@${CC} ${FLAG} ${OBJS} -o ${NAME}
	@make clean
	@clear
	@echo "${CYAN}./${NAME} created${NONE}"

all : ${NAME}

clean :
	@rm -rf ${OBJS}
	@echo "${VIOLET}OBJS deleted${NONE}"

fclean : clean
	@rm -rf ${NAME}
	@echo "${CYAN}./${NAME} deleted${NONE}"

re : fclean all clean

.PHONY : fclean all re clean
