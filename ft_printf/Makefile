# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 14:41:20 by evazquez          #+#    #+#              #
#    Updated: 2023/08/23 17:32:55 by evazquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include utils/format.mk

#-----------variable definitions-----------------------------------------------#

NAME =	 	libftprintf.a

#HEAD = 		include/ft_printf.h

SOURCES :=	$(wildcard src/*.c)

VPATH =		src include obj utils

OBJECT = 	$(patsubst src/%.c, obj/%.o,$(SOURCES))

CFLAGS = 	-Wall -Werror -Wextra

#-----------rules-------------------------------------------------------------#

all: 		$(NAME)

$(NAME): $(OBJECT)
	@ar -rcs $(NAME) $(OBJECT) 
	@printf "${DEL_LINE}\r${GREEN}PRINTF MANDATORY COMPILED!\n"

obj/%.o : %.c include/ft_printf.h | obj
	@mkdir -p obj
	@gcc $(CFLAGS) -I./include -c $< -o $@

$(OBJECT) : | obj

obj:
	@mkdir -p obj

#-----------directives---------------------------------------------------------#
			

#-----------phony targets------------------------------------------------------#

.PHONY : all clean fclean re 

clean:
	@rm -rf obj bonus/obj_bonus
	@printf "${DEL_LINE}\r${GREEN}cleaned all object files\n"

fclean: clean
	@rm -rf $(NAME) libftprintf_bonus.a
	@printf "${DEL_LINE}\r${GREEN}cleaned all target files\n"

re: fclean all
	@printf "${DEL_LINE}\r${GREEN}recompilation complete\n"
