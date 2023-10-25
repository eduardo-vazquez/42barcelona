# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 14:41:20 by evazquez          #+#    #+#              #
#    Updated: 2023/03/06 10:52:12 by evazquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = ar -rcs
GCC = gcc
CFLAGS = -Wall -Werror -Wextra
RM	= rm -f

OBJS = 	ft_isalpha.o	ft_isdigit.o	ft_isalnum.o	ft_isascii.o	ft_isprint.o	ft_strlen.o\
		ft_memset.o		ft_bzero.o		ft_memcpy.o		ft_memmove.o	ft_strlcpy.o	ft_strlcat.o\
		ft_toupper.o	ft_tolower.o	ft_strchr.o		ft_strrchr.o	ft_strncmp.o	ft_memchr.o\
		ft_memcmp.o		ft_strnstr.o	ft_atoi.o		ft_calloc.o		ft_strdup.o\

OBJS_AD =	ft_substr.o		ft_strjoin.o 		ft_strtrim.o	ft_split.o		ft_itoa.o	ft_strmapi.o\
			ft_striteri.o	ft_putchar_fd.o	ft_putstr_fd.o	ft_putendl_fd.o		ft_putnbr_fd.o\

OBJS_BO = ft_lstnew.o		ft_lstadd_front.o	ft_lstsize.o	ft_lstlast.o	ft_lstadd_back.o\
			ft_lstdelone.o		ft_lstclear.o	ft_lstiter.o	ft_lstmap.o

HEAD = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_AD) $(HEAD)
	$(CC) $(NAME) $(OBJS) $(OBJS_AD) $(HEAD)

bonus: $(OBJS) $(OBJS_AD) $(OBJS_BO) $(HEAD)
	$(CC) $(NAME) $(OBJS_BO) $(OBJS) $(OBJS_AD)

%.o : %.c
		$(GCC) -c $(CFLAGS)  $< -o $@

.PHONY : all clean fclean re rebonus
clean:
	$(RM) $(OBJS) $(OBJS_AD) $(OBJS_BO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus
