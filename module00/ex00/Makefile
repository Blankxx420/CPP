# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 22:03:48 by brguicho          #+#    #+#              #
#    Updated: 2024/07/10 23:28:36 by brguicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

SRCS =	megaphone.cpp
		
OBJ_DIR = object

OBJS =  $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(dir $(OBJS))

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re