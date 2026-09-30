CC = gcc
LIB = ar rcs
CFLAGS = -Wall -Wextra
CFDEBUG = -fsanitize=address -g -Werror

OBJ = gui.o

test: $(OBJ) main.o
	$(CC) $^ -o $@ $(CFLAGS)

build: $(OBJ)
	$(LIB) libguilib.a $^

debug: $(OBJ)
	$(CC) $^ -o $@ $(CFLAGS) $(CFDEBUG)

%.o: scr/%.c
	$(CC) $(CFLAGS) -c $<



.PHONY: clean

clean:
	$(RM) $(OBJ) debug test libguilib.a test.o a.out
