NAME		=	phonebook

SRCS		=	phonebook.cpp \
					contact.cpp

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

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