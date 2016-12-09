/*********************************************************************
** Program Filename: bat.cpp
** Author: Ben Lester
** Date: 5/21/206
** Description: bat functions
** Input: n/a 
** Output: n/a
*********************************************************************/
#include "bat.h"

/*********************************************************************
** Function: const.
** Description: makes event
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
bat::bat(){

}
/*********************************************************************
** Function: dest
** Description: destroys event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
bat::~bat(){

}
/*********************************************************************
** Function: precept
** Description: prints warning
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions: void
*********************************************************************/ 
void bat::precept(){

	std::cout<<"You hear wings flapping"<<std::endl;

}
/*********************************************************************
** Function: display
** Description: shows what type of event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
void bat::display(){

	std::cout<<"BAT"<<std::endl;

}
/*********************************************************************
** Function: ID
** Description: returns code for id'ing event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
int bat::ID(){

	return 4;

}