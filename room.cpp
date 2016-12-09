/*********************************************************************
** Program Filename: room.cpp
** Author: Ben Lester
** Date: 5/18/2016
** Description: room class functions
** Input: n/a
** Output: n/a
*********************************************************************/
#include "room.h"

room::room(){

	e=NULL;
	empty=true;

}
room::~room(){

}
void room::reset(){

	e=NULL;
	empty=true;

}
void room::set_event(event *b){

	e=b;
	empty=false;
}
void room::check(){

	if(empty!=true)
	e->precept();
	
}
/*********************************************************************
** Function: display
** Description: calls display function for event
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions: void
*********************************************************************/ 
void room::display(){

	e->display();

}
/*********************************************************************
** Function: ID
** Description: returns event ID
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions: void
*********************************************************************/ 
int room::ID(){

	if(empty==false){
		
		return e->ID();
	}
	else{
		return 5;
	}
}
void room::operator=(const room &r){

	e=r.e;
	empty=r.empty;
}