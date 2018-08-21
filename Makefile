# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrossouw <hrossouw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 13:31:24 by hrossouw          #+#    #+#              #
#    Updated: 2018/08/21 10:47:36 by hrossouw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

 CC = gcc
 CFLAGS = -Wall -Wextra -Werror -I includes
 
 SRC_PATH = src/
 INC_PATH = includes/
 OBJ_PATH = obj/
 LIBFT_PATH = libft/

 SRC_NAME = main.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))
INC_LIBFT = $(addprefix -I, $(addprefix $(LIBFT_PATH), $(INC_PATH)))

all: $(PLAYER_PATH)$(NAME)

$(PLAYER_PATH)$(NAME): $(OBJ)
	make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) -o $@ $(OBJ) -L$(LIBFT_PATH) -lft

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(INC) $(INC_LIBFT) -o $@ -c $<

clean:
	make -C $(LIBFT_PATH) clean
	rm -rf $(OBJ_PATH)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

test: $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L$(LIBFT_PATH) -lft

re: fclean all

.PHONY: all, $(NAME), clean, fclean, re
