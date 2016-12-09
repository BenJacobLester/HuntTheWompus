/*********************************************************************
** Program Filename: driver.cpp
** Author: Ben Lester
** Date: 5/21/206
** Description: makes game, gets command line args
** Input: argv, argc
** Output: 0
*********************************************************************/
#include <iostream>
#include "game.h"
#include "player.h"
#include "room.h"
#include "pit.h"

using namespace std;

int main(int argc, char *argv[]){

	if(argc==2 && argv[1][0]-'0'>=4){

	game g(argv[1][0]-'0');

	g.play();

	}
	else
		cout<<"Please re-enter with valid board dimensions"<<endl;

	return 0;
}