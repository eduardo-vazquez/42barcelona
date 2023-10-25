include utils/format.mk 

#-----------variable definitions-----------------------------------------------#

NAME = libftprintf.a

SOURCES :=	$(wildcard src/*.c) 

FLAGS = -Wall -Werror -Wextra 

PROJECT = get_next_line

#-----------rules--------------------------------------------------------------#

$(NAME): $(OBJECT)
	ar -rcs $(NAME) $(OBJECT) 

obj/%.o : %.c include/$(PROJECT).h | obj
	mkdir -p obj
	gcc $(CFLAGS) -I./include -c $< -o $@

$(OBJECT) : | obj

obj:
	mkdir -p obj

#-----------phony targets------------------------------------------------------#

.PHONY : all clean fclean re
.SILENT : all clean fclean re

all: $(NAME)

clean:
	rm -rf obj bonus/obj_bonus

fclean: clean
	rm -rf $(NAME) libftprintf_bonus.a

re: fclean all

########################_ELIMINAR_DESDE_AQUI_###################################
#---------------------------test-----------------------------------------------#

# NO OLVIDAR: borrar main del header

test = ./test_get_next_line.c

test_FLAGS = -Wall -Werror -Wextra -DBUFFER_SIZE=$(BUFFER_SIZE)
test_SOURCES :=	$(wildcard ../../get_next_line/*.c) 
test_HEAD = ../../$(PROJECT)/$(PROJECT).h

BUFFER_SIZE = 10 

##header
LINE_TO_STAR = 23

#-----------phony targets------------------------------------------------------#

.PHONY : header gcc clang run debug debug-clang normi
.SILENT : header gcc clang run debug debug-clang normi

header :					#receta que escribe el header
	sed -i '.h' '$(LINE_TO_STAR),$$d' $(test_HEAD)
	for file in $(test_SOURCES); do \
		grep -E "^[[:alnum:]_]+\t+[[:punct:][:alnum:]_]+\s*\([^;]*\)\s*" $$file | sed 's/$$/;/g' >> $(test_HEAD); \
		done
	echo "#endif" >> $(test_HEAD)
	rm $(test_HEAD).h
	printf "${DEL_LINE}\r${CYAN}hader done${DEL_LINNE}${WHITE}\n"

gcc:							#receta para compilar
	gcc -g $(test_FLAGS) $(test_SOURCES) $(test)
	printf "${DEL_LINE}\r${CYAN}compilado con gcc${DEL_LINNE}${WHITE}\n"

clang:							#receta para compilar con clang 
	clang -DBUFFER_SIZE=$(BUFFER_SIZE) -g -fsanitize=address $(test_SOURCES) $(test)
	printf "${DEL_LINE}\r${CYAN}compilado con clang y ASan!${DEL_LINNE}${WHITE}\n"

run: gcc header			#receta para correr el ejecutable
	printf "${DEL_LINE}\r${CYAN}program output\n==============\n${DEL_LINNE}${WHITE}"
	./a.out
	rm a.out
	printf "${DEL_LINE}\r${CYAN}==============\nend of output${DEL_LINNE}${WHITE}\n"

debug: gcc  #header 
	lldb ./a.out -o "b main" -o "r"

debug-clang:  clang  #header 
	lldb ./a.out -o "b main" -o "r"

normi :
	norminette $(test_SOURCES) 

cp :
	cp -r ./* Makefile *.txt *.c *.h  ../git42/42-get_next_line/
#	cd  ../git42/42-get_next_line && \
	git add . && \
	git commit -m "28.08.23"  && \
	git push && \
	echo evazquez && \
	echo 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

