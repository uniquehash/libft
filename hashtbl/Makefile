# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/25 11:25:58 by obelange          #+#    #+#              #
#    Updated: 2016/10/22 17:26:22 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hotrace

S_PATH = src/
B_PATH = build/
H_PATH = include/
LIBFT_PATH = libft
PRINTF_PATH = ft_printf

FILES = hotrace_helper hotrace_helper1

FILES += t_hash_infa t_hash_helper

FILES += t_node_infa

FILES += get_next_line gnl_helper gnl_helper1

FILES += 

FILES += 

FILES += 

FILES += 

FILES += 

FILES += main 

OBJ = $(addprefix $(B_PATH), $(addsuffix .o, $(FILES)))

LIB_COMP = -L$(LIBFT_PATH) -lft -I$(LIBFT_PATH) -L$(PRINTF_PATH) -lftprintf -I$(PRINTF_PATH)

FLAGS = -Wall -Werror -Wextra -g
DEVF = $(FLAGS) -fsanitize=address
LEAKF = $(FLAGS) $(HOME)/Desktop/offence/tools/alloc_wrap.c -ldl

ifdef ALLOCWRAP
	C_FLAGS += $(HOME)/Desktop/offence/tools/alloc_wrap.c -ldl
endif 

.PHONY: all fclean clean run leak

all : $(NAME)

$(NAME) : $(B_PATH) $(OBJ)
	@echo ""
	gcc $(FLAGS) -o $(NAME) $(OBJ)

run : fclean $(B_PATH) $(OBJ)
	@echo "\x1b[31mrun is turned on\x1b[36m"
	gcc $(FLAGS) -o $(NAME) $(OBJ) && printf "\x1b[37m" && ./$(NAME)

dev : fclean $(B_PATH) $(OBJ)
	gcc $(DEVF) -o $(NAME) $(OBJ)

leak : $(B_PATH) $(OBJ)
	@echo "\x1b[31malloc wrap is turned on\x1b[36m"
	gcc $(LEAKF) -o $(NAME) $(OBJ)

leaks: re
	@ osascript -e 'tell application "iTerm2" to activate' -e '\
		tell application "System Events" to tell process "iTerm2" to keystroke "D" using command down' -e 'tell application "System Events" to tell process "iTerm" to keystroke "while true ;do clear; leaks $(NAME); sleep 2 ;done"' -e 'tell application "System Events" to tell process "iTerm" to key code 52'

$(B_PATH) :
	@printf "\x1b[32m \nbuilding objects.....\n\x1b[33m"
	@mkdir build

$(B_PATH)%.o : $(S_PATH)%.c
	gcc -c $< -o $@ -I ./$(LIBFT_PATH)/$(H_PATH) -I ./$(H_PATH) -I ./$(PRINTF_PATH)/$(H_PATH)
	
clean : 
	@rm -rf build

fclean : clean
	@rm -f $(NAME)

re : fclean all


