CC = gcc
LIB = ar rcs
CFLAGS = -Wall -Wextra
CFDEBUG = -fsanitize=address -g -Werror

OBJ = colors.o commands.o clean.o rectangle.o

test: $(OBJ) test.o
	$(CC) $^ -o $@ $(CFLAGS)

library: $(OBJ)
	$(LIB) $@.a $^

debug: $(OBJ)
	$(CC) $^ -o $@ $(CFLAGS) $(CFDEBUG)

%.o: scr/%.c
	$(CC) $(CFLAGS) -c $<



.PHONY: clean

clean:
	$(RM) $(OBJ) debug test main.o test.o
