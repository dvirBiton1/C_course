.PHONY = all clean
CC=gcc
OBJ=my_mat.o  main.o
NAME = connections
CFLAGS = -Wall -Werror -g

all : $(NAME)
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o *.a connections