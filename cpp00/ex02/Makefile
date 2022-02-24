NAME		=	account

SRCS		=	Account.cpp \
					test.cpp

OBJS		=	$(SRCS:.cpp=.o)

CC			=	clang++ -g3 -fsanitize=address

CFLAGS		=	-Wall -Wextra -Werror

all:			$(NAME)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@2

$(NAME) :		$(OBJS)
					$(CC) $(CFLAGS) $(OBJS) -o $@

clean :
				rm -f $(OBJS)

fclean :	clean
				rm -f $(NAME)

re :		fclean all

.PHONY : all clean fclean re