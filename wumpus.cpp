/*********************************************************************
** Program Filename: wumpus.cpp
** Author: Ben Lester
** Date: 5/21/206
** Description: wumpus functions
** Input: n/a 
** Output: n/a
*********************************************************************/
#include "wumpus.h"

/*********************************************************************
** Function: const.
** Description: makes event
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
wumpus::wumpus(){

}
/*********************************************************************
** Function: dest
** Description: destroys event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
wumpus::~wumpus(){

}
/*********************************************************************
** Function: precept
** Description: prints warning
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions: void
*********************************************************************/ 
void wumpus::precept(){

	std::cout<<"You smell a terrible stench"<<std::endl;
}
/*********************************************************************
** Function: display
** Description: shows what type of event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
void wumpus::display(){

	std::cout<<"Wumpus"<<std::endl;
}
/*********************************************************************
** Function: ID
** Description: returns code for id'ing event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
int wumpus::ID(){

	return 2;
}