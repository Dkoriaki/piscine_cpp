NAME		=	a.out

SRCS		=	main.cpp \
					Zombie.cpp \
					ZombieHorde.cpp \

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror

all:			$(NAME)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME) :		$(OBJS)
					$(CC) $(CFLAGS) $(OBJS) -o $@

clean :
				rm -f $(OBJS)

fclean :	clean
				rm -f $(NAME)

re :		fclean all

.PHONY : all clean fclean re