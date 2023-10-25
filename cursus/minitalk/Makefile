SERVER_SRCS	= server.c
CLIENT_SRCS = client.c
SERVER_BNS = server_bonus.c
CLIENT_BNS = client_bonus.c
HEADERS = include/minitalk.h
HEADERS_BNS = include/minitalk_bonus.h

FTDEP = ${SERVER_SRCS:.c=.d} ${CLIENT_SRCS:.c=.d}
FTDEPB = ${SERVER_BNS:.c=.d} ${SERVER_BNS:.c=.d}

CC	=	cc
LIBRERIAS = -Linclude/libft -Linclude/ft_printf/include
CFLAGS = -Wall -Werror -Wextra


%.o	:	%.c ${HEADERS} include/libft/libft.a include/ft_printf/ft_printf.a
		${CC} ${CFLAGS} -c $< -o $@

all	:	libft ft_printf server client

bonus : libft ft_printf server_bonus client_bonus
	
libft :
	@make -C include/libft

ft_printf :
	@make -C include/ft_printf	

server : ${SERVER_SRCS:.c=.o} ${HEADERS}
	 ${CC} ${CFLAGS} ${SERVER_SRCS} ${LIBRERIAS} -o server

client : ${CLIENT_SRCS:.c=.o} ${HEADERS}
	${CC} ${CFLAGS} ${CLIENT_SRCS} ${LIBRERIAS} -o client

server_bonus : ${SERVER_BNS:.c=.o} ${HEADERS_BNS}
	${CC} ${CFLAGS} ${SERVER_BNS} ${LIBRERIAS} -o server_bonus

client_bonus : ${CLIENT_BNS:.c=.o} ${HEADERS_BNS}
	${CC} ${CFLAGS} ${CLIENT_BNS} ${LIBRERIAS} -o client_bonus
	
clean : 
	rm -rdf ${SERVER_SRCS:.c=.o} ${CLIENT_SRCS:.c=.o} ${SERVER_BNS:.c=.o} ${CLIENT_BNS:.c=.o} ${FTDEP} ${FTDEPB}
	@make clean -C include/libft
	@make clean -C include/ft_printf

fclean : clean
	rm -rdf client server client_bonus server_bonus
	@make fclean -C include/libft
	@make fclean -C include/ft_printf

re :	fclean all

-include ${FTDEP}
-include ${FTDEPB}
.PHONY:	all	libft clean	fclean	re	
