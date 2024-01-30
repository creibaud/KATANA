CC = g++
TARGET = main
SOURCES = main.cpp src/Card/Card.cpp src/Card/SpecialCard.cpp src/Card/Action/ActionCard.cpp src/Card/Action/Bonus/ActionBonus.cpp src/Card/Character/CharacterCard.cpp src/Card/Character/Bonus/CharacterBonus.cpp src/Card/Permanent/PermanentCard.cpp src/Card/Permanent/Bonus/PermanentBonus.cpp src/Card/Role/RoleCard.cpp src/Card/Weapon/WeaponCard.cpp src/Game/Game.cpp

$(TARGET): $(SOURCES)
	$(CC) -o $(TARGET) $(SOURCES)