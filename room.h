/*********************************************************************
** Program Filename: room.h
** Author: Ben Lester
** Date: 5/18/2016
** Description: room class file header
** Input: n/a
** Output: n/a 
*********************************************************************/
#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "event.h"

class room{

private:
	event *e;
	bool empty;

public:
	room();
	~room();
	void set_event(event *); //sets event in a room
	void check(); //calls precept function to check surrounding rooms
	void display();
	int ID();
	void operator=(const room &);
	void reset();
};

#endif