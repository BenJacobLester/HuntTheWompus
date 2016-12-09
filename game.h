/*********************************************************************
** Program Filename: game.h
** Author: Ben Lester
** Date: 5/21/2016
** Description: game class
** Input: dimensions 
** Output: gameplay 
*********************************************************************/
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <stdlib.h>
#include "room.h"
#include "player.h"
#include "event.h"
#include "pit.h"
#include "bat.h"
#include "wumpus.h"
#include "gold.h"
#include <time.h>
using std::cout;
using std::endl;
using std::cin;

class game{
	
		private:
			room **board;
			int size;
			char action;
			bool over;
			char dir;
			char choice;
			bool newgame;
			bool set;
			bool same;
						//two pits
			pit p1;
			pit p2;
						//two bats
			bat b1;
			
			bat b2;
			
						//one wumpus
			wumpus w;
						//one gold
			gold g;
						//one player
			player p;


		public:

			game(int);
			~game();
			void play();


};
#endif
