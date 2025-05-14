# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 18:27:31 by brguicho          #+#    #+#              #
#    Updated: 2025/05/13 13:46:02 by brguicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJ_DIR = object

OBJS =  $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

NAME = Ex01
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