Hunt : driver.o bat.o event.o game.o gold.o pit.o wumpus.o room.o player.o
	g++ driver.o bat.o event.o game.o gold.o pit.o wumpus.o room.o player.o -o Hunt

driver.o: driver.cpp
	g++ -c driver.cpp
bat.o: bat.cpp bat.h
	g++ -c bat.cpp
event.o: event.cpp
	g++ -c event.cpp
game.o: game.cpp
	g++ -c game.cpp
gold.o: gold.cpp
	g++ -c gold.cpp
pit.o: pit.cpp pit.h
	g++ -c pit.cpp
wumpus.o: wumpus.cpp
	g++ -c wumpus.cpp
room.o: room.cpp
	g++ -c room.cpp
player.o: player.cpp
	g++ -c player.cpp
