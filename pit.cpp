/*********************************************************************
** Program Filename: pit.cpp
** Author: Ben Lester
** Date: 5/21/206
** Description: pit functions
** Input: n/a 
** Output: n/a
*********************************************************************/
#include "pit.h"

/*********************************************************************
** Function: const.
** Description: makes event
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
pit::pit(){


}
/*********************************************************************
** Function: dest
** Description: destroys event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
pit::~pit(){

}
/*********************************************************************
** Function: precept
** Description: prints warning
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions: void
*********************************************************************/ 
void pit::precept(){

	std::cout<<"You feel a breeze"<<std::endl;
}
/*********************************************************************
** Function: display
** Description: shows what type of event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
void pit::display(){

	std::cout<<"PIT"<<std::endl;
}
/*********************************************************************
** Function: ID
** Description: returns code for id'ing event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
int pit::ID(){

	return 3;
}