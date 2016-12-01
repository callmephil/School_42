# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 14:06:48 by pmakhzou          #+#    #+#              #
#    Updated: 2016/12/01 04:39:49 by pmakhzou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ******************************** COMPILATION ******************************* #

NAME = libft.a
CC = gcc
CFLAG = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)#$(addprefix $(OBJDIR),$(SRC:.c=.o))

# ******************************** DIRECTORIES ******************************* #

SRCDIR = src
OBJDIR = obj
LIBDIR = includes/

RM = rm -rf

# *************************** SOURCES DEPENDANCIES *************************** #

SRC_BASIC_CHARS = src/basics/chars/check/*.c \
				src/basics/chars/modify/*.c \
				src/basics/chars/output/*.c

SRC_BASIC_MATHS = src/basics/maths/convert/*.c

SRC_BASIC_MEMORY = src/basics/memory/create/*.c \
				src/basics/memory/delete/*.c \
				src/basics/memory/iterate/*.c \
				src/basics/memory/modify/*.c

SRC_BASIC_STRINGS = src/basics/strings/create/*.c \
				src/basics/strings/delete/*.c \
				src/basics/strings/iterate/*.c \
				src/basics/strings/modify/*.c \
				src/basics/strings/output/*.c

SRC_BASIC = $(SRC_BASIC_STRINGS) \
		$(SRC_BASIC_MEMORY) \
		$(SRC_BASIC_MATHS) \
		$(SRC_BASIC_CHARS)

SRC_CONTAINERS_LIST = src/containers/list/create/*.c \
					src/containers/list/delete/*.c \
					src/containers/list/iterate/*.c \
					src/containers/list/modify/*.c

SRC_CONTAINERS = $(SRC_CONTAINERS_LIST)

SRC = $(SRC_BASIC) \
	$(SRC_CONTAINERS)

# ******************************** COMPILATION ******************************* #

all: $(NAME)

$(NAME):
	$(CC) $(CLFAG) -c $(SRC) -I $(LIBDIR)
	mkdir -p $(OBJDIR)
	mv *.o $(OBJDIR)
	ar rc $(NAME) $(OBJDIR)/*.o
	ranlib $(NAME)

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
