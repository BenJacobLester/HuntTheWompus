/*********************************************************************
** Program Filename: gold.h
** Author: Ben Lester
** Date: 5/21/206
** Description: gold class header
** Input: n/a 
** Output: n/a
*********************************************************************/
#ifndef GOLD_H
#define GOLD_H
#include "event.h"
#include <iostream>

class gold : public event{


private:

public:

	gold();
	~gold();
	void precept();
	bool get_gold();
	void display();
	int ID();
	
};
#endif