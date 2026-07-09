CC = gcc

CFLAGS = -Wall -Wextra -Werror -std=c11

SRC = src/main.c \
      src/shell.c

TARGET = myshell

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)