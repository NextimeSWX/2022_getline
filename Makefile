# E89 Pedagogical & Technical Lab
# project:     template C repo
# created on:  2022-09-14 - 16:36 +0200
# 1st author:  Élise C. Philippe - eriizu
# description: Building the project

NAME	=	all.out

NAME_TEST = 	test.out

SRCS	=	src/getline.c			\
		src/split_inplace.c		\
		src/strdupcat.c			\
		src/strlen.c			\
		src/loop_read_until.c		\
		src/strdup.c			\
		src/strchr.c			\
#		src/main.c

SRCS_TEST =	test/test_getline.c

OBJS	=	$(SRCS:.c=.o)

OBJS_TEST =	$(SRCS_TEST:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME_TEST)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(NAME_TEST): $(OBJS) $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS) $(OBJS_TEST) -lcriterion

clean:
	@$(RM) $(OBJS) $(OBJS_TEST)

fclean: clean
	@$(RM) $(NAME) $(NAME_TEST)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
