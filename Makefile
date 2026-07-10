CC = gcc

CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

SRC = src/main.c \
      src/shell.c \
      src/parser.c \
      src/executor.c \
      src/builtins.c

TARGET = myshell

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

re: clean all

.PHONY: all clean re