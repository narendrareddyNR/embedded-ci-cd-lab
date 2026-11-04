
CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iinclude

TARGET = build/firmware

SOURCES = src/main.c \
          drivers/gpio.c \
          drivers/uart.c

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(SOURCES)
	mkdir -p build
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

test: all
	@set -eu; \
	output="$$(./$(TARGET))"; \
	printf '%s\n' "$$output"; \
	printf '%s\n' "$$output" | grep -Fq "Embedded CI/CD Lab"; \
	printf '%s\n' "$$output" | grep -Fq "GPIO initialized"; \
	printf '%s\n' "$$output" | grep -Fq "GPIO toggled"; \
	printf '%s\n' "$$output" | grep -Fq "UART initialized"; \
	printf '%s\n' "$$output" | grep -Fq "UART TX: Hello from embedded firmware"; \
	echo "Firmware smoke tests PASSED"

clean:
	rm -rf build

