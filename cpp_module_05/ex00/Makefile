NAME = bureaucrat

SRCS= main.cpp \
	  Bureaucrat.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	@${CC} ${FLAG} -c $< -o $@
	@echo "WIP..."

NAME : ${OBJS}
	@${CC} ${FLAG} ${OBJS} -o ${NAME}
	@echo "${NAME} creted"
	@make clean
	@clear

all : ${NAME}

clean :
	@rm -rf ${OBJS}
	@echo "OBJS deleted"

fclean : clean
	@rm -rf ${NAME}
	@echo "${NAME} deleted"

re : fclean all re

.PHONY : fclean all re clean
