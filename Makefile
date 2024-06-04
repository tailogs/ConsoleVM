# Имя исполняемого файла
TARGET = ConsoleVM.exe

# Компилятор
CC = gcc

# Флаги компилятора
CFLAGS = -Wall -Wextra -std=c11

# Заголовочные файлы
HEADERS = map.h examples\hello_world.h

# Исходные файлы
SRCS = main.c map.c examples\hello_world.c

# Объектные файлы
OBJS = $(SRCS:.c=.o)

# Основное правило: как собирать исполняемый файл из объектных файлов
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Правило для создания объектных файлов из исходных
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Правило для запуска исполняемого файла
run: $(TARGET)
	./$(TARGET)

# Очистка всех объектных файлов и исполняемого файла
clean:
	del $(OBJS) $(TARGET)

# Файлы, которые не являются файлами программы
.PHONY: clean run
