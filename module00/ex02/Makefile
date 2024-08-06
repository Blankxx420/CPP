# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 23:54:37 by brguicho          #+#    #+#              #
#    Updated: 2024/08/06 23:12:04 by brguicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

SRCS =	Account.cpp \
		tests.cpp \

OBJ_DIR = object

OBJS =  $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

NAME = PhoneBook
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAG) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(dir $(OBJS))

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re