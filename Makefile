CC=gcc

SRC=test.c list.c
OBJ=$(SRC:.c=.o)
EXE=test

$(EXE): $(OBJ)
	$(CC) ${OBJ} -o $(EXE)
	/bin/rm -f *.o

%.o: %.c
	$(CC) -c $^ -o $@
