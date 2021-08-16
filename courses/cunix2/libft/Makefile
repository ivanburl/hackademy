<<<<<<< HEAD
CC					:= gcc
RM					:= rm -rf
CFLAGS		    	+= -std=c99 -Iinclude -Wall -Wextra -Werror -c
SRCS				:= $(wildcard src/*.c)
OBJS				:= $(SRCS:.c=.o)
LIB_NAME			:= libft.a
STYLE50				:= ~/.local/bin/style50

all:		    clean $(OBJS)
				@$(CC) $(CFLAGS) $(SRCS)
				@ar rcs $(LIB_NAME) src/*.o

checkstyle:
				@$(STYLE50) $(SRCS) #&>/dev/null && echo "LOOKS GOOD!!!"

clean:
				$(RM) $(OBJS) $(LIB_NAME)
=======
all:
	@rm -f libft.a
	gcc -Wall -c *.c 
	ar -cvq libft.a *.o
	@rm -f *.o
clean:
	@rm -f *.o libft.a
>>>>>>> 12c69d2 (week 3 day 1 done)
