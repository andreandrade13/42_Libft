# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 11:58:41 by andchris          #+#    #+#              #
#    Updated: 2021/11/28 15:50:43 by andchris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
	  ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
	  ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_putchar_fd.c\
	  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_striteri.c\
	  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c 

OBJ = ${SRC:.c=.o}

OBJBONUS = ${BONUS:.c=.o}

CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
		ar rcs ${NAME} ${OBJ}

bonus: ${OBJ} ${OBJBONUS}
		ar rcs ${NAME} ${OBJ} ${OBJBONUS}

all: ${NAME}

clean:
		${RM} ${OBJ} ${OBJBONUS}

fclean:	clean
			${RM} $(NAME)
			
re: fclean all
