# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:11:52 by evazquez          #+#    #+#              #
#    Updated: 2023/09/08 13:59:57 by evazquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------variable definitions-----------------------------------------------#

NAME = push_swap

SOURCES :=	$(wildcard src/*.c) 

OBJECTS := $(SOURCES:src/%.c=obj/%.o)

FLAGS = -Wall -Werror -Wextra -Iinclude

PROJECT = push_swap

#-----------rules--------------------------------------------------------------#

$(NAME): $(OBJECTS)
	@$(MAKE) -C ./include/libft
	@gcc $(FLAGS) $(OBJECTS) ./include/libft/libft.a -o $(NAME)

obj/%.o : src/%.c include/$(PROJECT).h
	@gcc -c $(FLAGS) $< -o $@

$(OBJECTS) : | obj

obj:
	mkdir -p obj

#-----------phony targets------------------------------------------------------#

.PHONY : all clean fclean re
.SILENT : all clean fclean re obj 
	
all: $(NAME)

clean:
	rm $(NAME)
	rm -rf obj bonus/obj_bonus

fclean: clean

re: fclean all

