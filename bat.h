/*********************************************************************
** Program Filename: bat.h
** Author: Ben Lester 
** Date: 5/21/2016
** Description: bat header file
** Input: n/a
** Output: n/a 
*********************************************************************/
#ifndef BAT_H
#define BAT_H
#include "event.h"
#include "player.h"
#include <iostream>

class bat: public event{

protected: 


public:

	bat();
	~bat();
	void precept();
	void relocate(player *);
	void display();
	int ID();





};
#endif