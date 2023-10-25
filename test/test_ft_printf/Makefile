include utils/format.mk


PROJECT = ft_printf
#-----------variable definitions-----------------------------------------------#

SOURCES :=	$(wildcard ../../$(PROJECT)/src/*.c) 

TEST = TEST_$(PROJECT).c

FLAGS = -Wall -Werror -Wextra 

##header
LINE_TO_STAR = 23
HEAD = ../../$(PROJECT)/include/$(PROJECT).h

#-----------rules-------------------------------------------------------------#

$(NAME): $(SOURCES)
	@gcc $(FLAGS) $(SOURCES) 
	@printf "${DEL_LINE}\r${GREEN}COMPILED!\n"

#-----------directives---------------------------------------------------------#
			

#-----------phony targets------------------------------------------------------#

.PHONY : header gcc clang run debug-gcc debug-clang normi cp

header :					#receta que escribe el header
	@sed -i '.h' '$(LINE_TO_STAR),$$d' $(HEAD)
	@for file in $(SOURCES); do \
		grep -E "^[[:alnum:]_]+\t+[[:punct:][:alnum:]_]+\s*\([^;]*\)\s*" $$file | sed 's/$$/;/g' >> $(HEAD); \
		done
	@echo "#endif" >> $(HEAD)
	@rm $(HEAD).h
	@printf "${DEL_LINE}\r${CYAN}\nHEADER DONE!${DEL_LINNE}${WHITE}\n"

gcc:							#receta para compilar
	@gcc -g $(FLAGS) $(SOURCES) $(TEST) $(HEAD)
	@printf "${DEL_LINE}\r${CYAN}\ncompilado gcc!${DEL_LINNE}${WHITE}\n"

clang:							#receta para compilar con clang 
	@clang -g -fsanitize=address $(SOURCES) $(TEST)
	@printf "${DEL_LINE}\r${CYAN}\ncompilado clang y ASan!${DEL_LINNE}${WHITE}\n"

run: gcc #header			#receta para correr el ejecutable
	@printf "${DEL_LINE}\r${CYAN}\nPROGRAM OUTPUT\n==============\n${DEL_LINNE}${WHITE}"
	@./a.out
	@rm a.out
	@printf "${DEL_LINE}\r${CYAN}\n==============\nEND OF OUTPUT${DEL_LINNE}${WHITE}\n"

debug-gcc:  gcc  #header 
	@lldb ./a.out -o "b main" -o "r"

debug-clang:  clang  #header 
	@lldb ./a.out -o "b main" -o "r"

normi :
	norminette 

cp :
	cp -r ./* Makefile *.txt *.c *.h  ../git42/42-get_next_line/
#	cd  ../git42/42-get_next_line && \
	git add . && \
	git commit -m "28.08.23"  && \
	git push && \
	echo evazquez && \
	echo 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
