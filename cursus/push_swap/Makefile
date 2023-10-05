# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:11:52 by evazquez          #+#    #+#              #
#    Updated: 2023/10/05 19:12:59 by evazquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------variable definitions-----------------------------------------------#

NAME = push_swap

SOURCES :=	$(wildcard src/*.c) 

OBJECTS := $(SOURCES:src/%.c=obj/%.o)

FLAGS = -Wall -Werror -Wextra -Iinclude -g

PROJECT = push_swap

MAX = 100

NUMS = `ruby -e "puts (1..${MAX}).to_a.shuffle.join(' ')"`

#-----------rules--------------------------------------------------------------#

$(NAME): $(OBJECTS)
	@$(MAKE) -C ./include/libft
	@gcc $(FLAGS) $(OBJECTS) ./include/libft/libft.a -o $(NAME)

obj/%.o : src/%.c include/$(PROJECT).h include/libft/libft.h
	@gcc -c $(FLAGS) $< -o $@

$(OBJECTS) : | obj

obj:
	mkdir -p obj

#-----------phony targets------------------------------------------------------#

.PHONY : all clean fclean re
.SILENT : all clean fclean re obj run
	
all: $(NAME)

clean:
	@$(MAKE) -C ./include/libft clean
	rm -rf obj

fclean: clean
	@$(MAKE) -C ./include/libft fclean
	rm $(NAME)

re: fclean all

run: | all
	./push_swap ${NUMS} #| wc -l
