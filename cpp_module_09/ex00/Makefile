#PROGRAM
NAME = btc

#FILES
SRCS= main.cpp \
	BitcoinExchange.cpp

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
	@echo "./${NAME} created"

all : ${NAME}

clean :
	@rm -rf ${OBJS}
	@echo "OBJS deleted"

fclean : clean
	@rm -rf ${NAME}
	@echo "./${NAME} deleted"

re : fclean all clean

.PHONY : fclean all re clean
