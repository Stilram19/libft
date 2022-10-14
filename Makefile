# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obednaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 13:36:21 by obednaou          #+#    #+#              #
#    Updated: 2022/10/14 18:13:37 by obednaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c 

BONUS_SRCS	 = ft_lstnew_bonus.c\
			   ft_lstadd_front_bonus.c\
			   ft_lstsize_bonus.c\
			   ft_lstlast_bonus.c\
			   ft_lstadd_back_bonus.c\
			   ft_lstdelone_bonus.c\
			   ft_lstclear_bonus.c\
			   ft_lstiter_bonus.c\
			   ft_lstmap_bonus.c

BONUS_OBJS	= ${BONUS_SRCS:.c=.o}

OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror
COMPILE		= cc

${NAME}:
	${COMPILE} ${FLAGS} -c ${SRCS}
	ar cr ${NAME} ${OBJS}
	ranlib ${NAME}
all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

bonus: all
	${COMPILE} ${FLAGS} -c ${BONUS_SRCS}
	ar cr ${NAME} ${BONUS_OBJS}
	ranlib ${NAME}

re: fclean all
