# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 22:07:27 by parrot            #+#    #+#              #
#    Updated: 2023/05/20 16:20:47 by robegarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# PROGRAM
NAME = Megaphone


# FILES
SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}


# COMPILE
CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98


# COLORS
VIOLET = \033[0;35m
ORANGE = \033[0;94m
NONE = \033[0m


# RULEZ
%.o: %.cpp
	@${CC} ${FLAG} -c $< -o $@


${NAME}: ${OBJS}
	@${CC} ${FLAG} ${OBJS} -o ${NAME}
	@echo "${VIOLET}./${NAME} has been created${NONE}"


all: ${NAME}


clean:
	@rm -rf ${OBJS}
	@echo "${ORANGE}objs deleted${NONE}"


fclean: clean
	@rm -rf ${NAME}
	@echo "${ORANGE}./${NAME} deleted${NONE}"


re: fclean all clean


.PHONY: all clean fclean re