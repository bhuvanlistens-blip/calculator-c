CC = clang
CFLAGS = -Wall -Wextra -std=c11
LDFLAGS = -lm
TARGET = calculator

.PHONY: all clean

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(TARGET)
