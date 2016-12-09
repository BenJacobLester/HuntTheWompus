/*********************************************************************
** Program Filename: gold.cpp
** Author: Ben Lester
** Date: 5/21/206
** Description: gold functions
** Input: n/a 
** Output: n/a
*********************************************************************/
#include "gold.h"

/*********************************************************************
** Function: const.
** Description: makes event
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
gold::gold(){

}
/*********************************************************************
** Function: dest
** Description: destroys event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
gold::~gold(){


}
/*********************************************************************
** Function: precept
** Description: prints warning
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions: void
*********************************************************************/ 
void gold::precept(){

	std::cout<<"You see a shimmering nearby"<<std::endl;
}
/*********************************************************************
** Function: display
** Description: shows what type of event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
void gold::display(){

	std::cout<<"GOLD"<<std::endl;
}
/*********************************************************************
** Function: ID
** Description: returns code for id'ing event
** Parameters: n/a 
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/ 
int gold::ID(){

	return 1;
}