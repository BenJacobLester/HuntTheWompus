/*********************************************************************
** Program Filename: event.h
** Author: Ben Lester 
** Date: 5/21/2016
** Description: event header file
** Input: n/a
** Output: n/a 
*********************************************************************/
#ifndef EVENT_H
#define EVENT_H
#include <iostream>

class event{

protected: 


public:

	event();
	//virtual ~event();
	virtual void precept()=0;
	virtual void display()=0;
	virtual int ID()=0;


};
#endif