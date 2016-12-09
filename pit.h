/*********************************************************************
** Program Filename: pit.h
** Author: Ben Lester
** Date: 5/21/206
** Description: pit functions
** Input: n/a 
** Output: n/a
*********************************************************************/
#ifndef PIT_H
#define PIT_H
#include "event.h"
#include <iostream>

class pit : public event{


private:

public:
	pit();
	~pit();
	void precept();
	void display();
	int ID();
	
};
#endif