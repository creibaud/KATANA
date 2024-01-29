CC = g++
TARGET = main
SOURCES = main.cpp

$(TARGET): $(SOURCES)
	$(CC) -o $(TARGET) $(SOURCES)