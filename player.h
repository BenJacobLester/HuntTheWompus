/*********************************************************************
** Program Filename: player.h
** Author:Ben Lester
** Date: 5/21/2016
** Description: player header file
** Input: n/a 
** Output: n/a 
*********************************************************************/
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <stdlib.h>
#include "room.h"
using std::cout;
using std::endl;
using std::cin;

class player{

private: 
	int row;
	int col;
	bool gold;
	int arrows;

public:
	player();
	~player();
	void set_place(int,int);
	int get_row();
	int get_col();
	void move(char);
	void set_gold(bool);
	bool has_gold();
	bool shoot();
	void set_rand(room **,int);
	void look(room**,int);
	void move(char,int);


};
#endif