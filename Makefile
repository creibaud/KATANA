CC = g++
TARGET = main
SOURCES = main.cpp src/Card/Card.cpp

$(TARGET): $(SOURCES)
	$(CC) -o $(TARGET) $(SOURCES)