CC = g++
TARGET = main
SOURCES = main.cpp src/role/role.cpp src/player/player.cpp src/game/game.cpp

$(TARGET): $(SOURCES)
	$(CC) -o $(TARGET) $(SOURCES)