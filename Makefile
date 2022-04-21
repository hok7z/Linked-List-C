CC=gcc

SRC=example.c list.c
OBJ=$(SRC:.c=.o)
EXE=example

$(EXE): $(OBJ)
	$(CC) ${OBJ} -o $(EXE)
	/bin/rm -f *.o

%.o: src/%.c
	$(CC) -c $^ -o $@ 
