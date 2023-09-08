include utils/format.mk 

################################_TEST_########3###################################

#-----------variables------------------------------------------------------------#

# NO OLVIDAR: borrar main del header

PROJECT = push_swap

test_FLAGS = -Wall -Werror -Wextra -g
test_SOURCES :=	$(wildcard ../../$(PROJECT)/src/*.c) 
test_HEAD = ../../$(PROJECT)/include/$(PROJECT).h

##header
LINE_TO_STAR = 23

test = ./test_$(PROJECT).c

LIST_NUMBERS = 1 2 3 4 5 6 7 8 9 10

#-----------RULES----------------------------------------------------------------#

header :					#receta que escribe el header
	sed -i '.h' '$(LINE_TO_STAR),$$d' $(test_HEAD)
	for file in $(test_SOURCES); do \
		grep -E "^[[:alnum:]_]+\t+[[:punct:][:alnum:]_]+\s*\([^;]*\)\s*" \
		$$file | sed 's/$$/;/g' >> $(test_HEAD); \
		done
	echo "#endif" >> $(test_HEAD)
	rm $(test_HEAD).h
	printf "${DEL_LINE}\r${CYAN}hader done${DEL_LINNE}${WHITE}\n"

gcc:	#receta para compilar
	@cd ../../push_swap && $(MAKE)

clean:
	rm -rf build 
	cd ../../push_swap && $(MAKE) clean

gcc-debug:
	mkdir -p build
	gcc $(test_FLAGS) $(test_SOURCES) -I../../push_swap/include -o ./build/push_swap

clang:							#receta para compilar con clang 
	clang -DBUFFER_SIZE=$(BUFFER_SIZE) -g -fsanitize=address $(test_SOURCES) $(test)
	printf "${DEL_LINE}\r${CYAN}compilado con clang y ASan!\
		${DEL_LINNE}${WHITE}\n"

run: gcc #header			#receta para correr el ejecutable
	cd ../../push_swap \
	&& printf "${DEL_LINE}\r${CYAN}---------------------${DEL_LINNE}${WHITE}\n"\
	&& ./push_swap $(LIST_NUMBERS) \
	&& printf "${DEL_LINE}\r${CYAN}---------------------${DEL_LINNE}${WHITE}\n"\
	&& $(MAKE) clean

debug: gcc-debug  #header 
	lldb ./build/push_swap -o "b main" -o "r"

debug-clang:  clang  #header 
	lldb ./a.out -o "b main" -o "r"

.PHONY : header gcc clang run debug debug-clang normi
.SILENT : header gcc clang run debug debug-clang normi

