# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 02:59:52 by svogrig           #+#    #+#              #
#    Updated: 2023/11/14 14:09:40 by svogrig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#------------------------------------------------------------------------------#
# variables                                                                    #
#------------------------------------------------------------------------------#

SRC_DIR		:=	.
SRCS 		:=	ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c	\
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

SRCBONUS	:=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

SRCS		:=	$(SRCS:%=$(SRC_DIR)/%)
SRCBONUS	:=	$(SRCBONUS:%=$(SRC_DIR)/%)

BUILD_DIR	:= 	.build
OBJS 		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
OBJBONUS	:=	$(SRCBONUS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

DEPS		:=	$(OBJS:.o=.d)
DEPBONUS	:=	$(OBJBONUS:.o=.d)

CC			:=	gcc
CFLAGS		:= 	-Wall -Wextra -Werror
CPPFLAGS	:=	-MMD -MP
AR			:=	ar
ARFLAGS		:=	-r -c -s

RM			:=	rm -f
MAKEFLAGS	+=	--no-print-directory
DIR_DUP		=	mkdir -p $(@D)

#------------------------------------------------------------------------------#
# rules                                                                        #
#------------------------------------------------------------------------------#

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info created: $@)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info created: $@)

-include $(DEPS) $(DEPBONUS)

bonus: $(OBJS) $(OBJBONUS) 
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(OBJBONUS)
	$(info created: $@)

clean:
	$(RM) $(OBJS) $(OBJBONUS) $(DEPS) $(DEPBONUS)
	
fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
	$(MAKE) so

.PHONY: clean fclean re so bonus
.SILENT:
