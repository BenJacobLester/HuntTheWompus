/*********************************************************************
** Program Filename: wumpus.h
** Author: Ben Lester 
** Date: 5/21/2016
** Description: wupmus header file
** Input: n/a
** Output: n/a 
*********************************************************************/
#ifndef WUMPUS_H
#define WUMPUS_H
#include "event.h"
#include "player.h"
#include <iostream>

class wumpus: public event{

protected: 


public:

	wumpus();
	~wumpus();
	void precept();
	void display();
	int ID();





};
#endif