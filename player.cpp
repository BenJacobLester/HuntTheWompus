/*********************************************************************
** Program Filename:player.cpp
** Author:Ben Lester
** Date: 5/21/2016
** Description: player functions
** Input: n/a
** Output: n/a
*********************************************************************/
#include "player.h"

/*********************************************************************
** Function: const.
** Description: makes player, innitialize 
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
player::player(){

	row=0;
	col=0;
	gold=false;
	arrows=3;
}
/*********************************************************************
** Function: destructor
** Description: destroys player
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
player::~player(){

	
}
/*********************************************************************
** Function: look
** Description: checks adjacent rooms for precepts 
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
********************************************************************/
void player::look(room **b,int s){

	if(row!=0)
		b[row-1][col].check();
	
	if(col!=0)
		b[row][col-1].check();

	if(row!=s-1)
		b[row+1][col].check();
	if(col!=s-1)
		b[row][col+1].check();

	

}
/*********************************************************************
** Function: player move function
** Description: takes in character and board size, moves player
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
void player::move(char dir,int s){

	if(dir=='n' && row!=0)
		row=row-1;

	if(dir=='s' && row!=s-1)
		row=row+1;
	if(dir=='e' && col!=s-1)
		col=col+1;
	if(dir=='w' && col!=0)
		col=col-1;

	cout<<"Moved to ("<<row<<","<<col<<")"<<endl;

}
/*********************************************************************
** Function: set place
** Description: allows place to be set, row, col
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
void player::set_place(int r,int c){
	row=r;
	col=c;

}
/*********************************************************************
** Function: shoot
** Description: decrements arrows, prints number left, returns bool empty
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
bool player::shoot(){

	arrows=arrows-1;	
	std::cout<<arrows<<" arrows left"<<std::endl;

	if(arrows==0)
		return false;
	else
		return true;

}
/*********************************************************************
** Function: has gold
** Description: boolean has gold (TRUE=yes, FALSE= no)
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
bool player::has_gold(){

	return gold;

}
/*********************************************************************
** Function:return row
** Description: returns row
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
int player::get_row(){

	return row;

}
/*********************************************************************
** Function: get collumn
** Description: returns col
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
int player::get_col(){

	return col;

}
/*********************************************************************
** Function: set_rand
** Description: sets random player location
** Parameters: board, dimensions
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
void player::set_rand(room **b,int s){
	srand (time(NULL));
	bool set=false;

	while(set==false){
		int tempr=rand() % s;
		//std::cout<<"Tempr="<<tempr<<std::endl;
		int tempc=rand() % s;
		//std::cout<<"Tempc="<<tempc<<std::endl;
		
		if(b[tempr][tempc].ID()==5){
			row=tempr;
			col=tempc;
			set=true;
		}
	}
	std::cout<<"Player at:("<<row+1<<","<<col+1<<")"<<std::endl;
	}
/*********************************************************************
** Function: set gold 
** Description: sets gold to a
** Parameters: bool
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
void player::set_gold(bool a){

	gold=a;
}