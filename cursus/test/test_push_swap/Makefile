include utils/format.mk 

################################_TEST_########3###################################

#-----------variables------------------------------------------------------------#

# NO OLVIDAR: borrar main del header

PROJECT = push_swap

test_FLAGS = -Wall -Werror -Wextra -DBUFFER_SIZE=$(BUFFER_SIZE)
test_SOURCES :=	$(wildcard ../../$(PROJECT)/*.c) 
test_HEAD = ../../$(PROJECT)/include/$(PROJECT).h

##header
LINE_TO_STAR = 23

test = ./test_$(PROJECT).c

#-----------phony targets------------------------------------------------------#

.PHONY : header gcc clang run debug debug-clang normi
.SILENT : header gcc clang run debug debug-clang normi

header :					#receta que escribe el header
	sed -i '.h' '$(LINE_TO_STAR),$$d' $(test_HEAD)
	for file in $(test_SOURCES); do \
		grep -E "^[[:alnum:]_]+\t+[[:punct:][:alnum:]_]+\s*\([^;]*\)\s*" \
		$$file | sed 's/$$/;/g' >> $(test_HEAD); \
		done
	echo "#endif" >> $(test_HEAD)
	rm $(test_HEAD).h
	printf "${DEL_LINE}\r${CYAN}hader done${DEL_LINNE}${WHITE}\n"

gcc:							#receta para compilar
	gcc -g $(test_FLAGS) $(test_SOURCES) $(test)
	printf "${DEL_LINE}\r${CYAN}compilado con gcc${DEL_LINNE}${WHITE}\n"

clang:							#receta para compilar con clang 
	clang -DBUFFER_SIZE=$(BUFFER_SIZE) -g -fsanitize=address $(test_SOURCES) $(test)
	printf "${DEL_LINE}\r${CYAN}compilado con clang y ASan!\
		${DEL_LINNE}${WHITE}\n"

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

