/*********************************************************************
** Program Filename: game.cpp
** Author: Ben Lester
** Date: 5/21/206
** Description: game functions
** Input: n/a 
** Output: n/a
*********************************************************************/
#include "game.h"


/*********************************************************************
** Function: constructs random game and gameboard
** Description: makes game
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
game::game(int z){

		over=false;
		size=z;

		board = new room*[size];
	  for(int i = 0; i < size; i++)
	      board[i] = new room[size];

	 
	//**************************
	srand (time(NULL));
	set=false;

	while(set==false){
		int tempr=rand() % size;
		//std::cout<<"Tempr="<<tempr<<std::endl;
		int tempc=rand() % size;
		//std::cout<<"Tempc="<<tempc<<std::endl;
		
		if(board[tempr][tempc].ID()==5){
			board[tempr][tempc].set_event(&p1);
			set=true;
		}
	}
	//****************************
	srand (time(NULL));
	set=false;

	while(set==false){
		int tempr=rand() % size;
		//std::cout<<"Tempr="<<tempr<<std::endl;
		int tempc=rand() % size;
		//std::cout<<"Tempc="<<tempc<<std::endl;
		
		if(board[tempr][tempc].ID()==5){
			board[tempr][tempc].set_event(&p2);
			set=true;
		}
	}
	//****************************
	srand (time(NULL));
	set=false;

	while(set==false){
		int tempr=rand() % size;
		//std::cout<<"Tempr="<<tempr<<std::endl;
		int tempc=rand() % size;
		//std::cout<<"Tempc="<<tempc<<std::endl;
		
		if(board[tempr][tempc].ID()==5){
			board[tempr][tempc].set_event(&b1);
			set=true;
		}
	}
	//****************************
	srand (time(NULL));
	set=false;

	while(set==false){
		int tempr=rand() % size;
		//std::cout<<"Tempr="<<tempr<<std::endl;
		int tempc=rand() % size;
		//std::cout<<"Tempc="<<tempc<<std::endl;
		
		if(board[tempr][tempc].ID()==5){
			board[tempr][tempc].set_event(&b2);
			set=true;
		}
	}
	//***************************
	srand (time(NULL));
	set=false;

	while(set==false){
		int tempr=rand() % size;
		//std::cout<<"Tempr="<<tempr<<std::endl;
		int tempc=rand() % size;
		//std::cout<<"Tempc="<<tempc<<std::endl;
		
		if(board[tempr][tempc].ID()==5){
			board[tempr][tempc].set_event(&g);
			set=true;
		}
	}
	//****************************
	srand (time(NULL));
	set=false;

	while(set==false){
		int tempr=rand() % size;
		//std::cout<<"Tempr="<<tempr<<std::endl;
		int tempc=rand() % size;
		//std::cout<<"Tempc="<<tempc<<std::endl;
		
		if(board[tempr][tempc].ID()==5){
			board[tempr][tempc].set_event(&w);
			set=true;
		}
	}
	p.set_rand(board,size);

	//*******************default board***************************
	/*
	board[0][1].set_event(&p1);
	board[1][3].set_event(&b1);
	board[3][2].set_event(&p2);
	board[3][3].set_event(&b2);

	board[2][1].set_event(&g);

	board[0][3].set_event(&w);
	*/




}
/*********************************************************************
** Function: play
** Description: allows user to move, fire, or replay a game
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
void game::play(){

	newgame=true;

	while(newgame==true){
		
		
		p.look(board,size);
		int startr=p.get_row();
		int startc=p.get_col();
		over=false;

	while(over!=true){


		cout<<"Move(m) or Fire(f)? ";
		cin>>action;

	//*******************************move*******************
		if(action=='m'){

			
			cout<<"Enter direction(n,s,e,w) ";
			cin>>dir;
			p.move(dir,size);

			if(board[p.get_row()][p.get_col()].ID()==1){
				
				if(p.has_gold()==false){
				p.set_gold(true);
				cout<<"You picked up gold!"<<endl;
				board[p.get_row()][p.get_col()].reset();
				}
			}
			if(board[p.get_row()][p.get_col()].ID()==2){
				cout<<"You were eaten by the wumpus, you lose"<<endl;
				over=true;
			}
			if(board[p.get_row()][p.get_col()].ID()==3){

				cout<<"You fell down a bottomless pit, you lose"<<endl;
				over=true;
			}
			if(board[p.get_row()][p.get_col()].ID()==4){

				cout<<"You were picked up by bats!"<<endl;

				p.set_rand(board,size);

			}
			if(board[p.get_row()][p.get_col()].ID()==5){

				if(p.get_row()==startr && p.get_col()==startc && p.has_gold()==true){
					cout<<"You made it back with the gold!"<<endl;
					over=true;
				}

				else
				p.look(board,size);

			}

			cout<<endl;
		}
	//*************************************************************

	//***************************fire******************************
		if(action=='f'){

			cout<<"What direction to shoot? (n,s,e,w)";
			cin>>dir;
	//************************************************************************************************

			if(dir=='n'){		

				for(int i=p.get_row();i>=0;i--){		//check each cell for a wumpus. If there is one you win, if not arrows=arrows-1 and game continues

					if(board[i][p.get_col()].ID()==2){
						cout<<"You killed the Wumpus!"<<endl;
						over=true;
					}

				}

				if(over==false){
										//if you miss check how many arrows are left. If there are no arrows left the game is over (over=true)
				if(p.shoot()==false){
					cout<<"You're out of arrows, you lose"<<endl;
					over=true;
				}
			}
		}

	//************************************************************************************************

			if(dir=='s'){		

				for(int i=p.get_row();i<size;i++){		//check each cell for a wumpus. If there is one you win, if not arrows=arrows-1 and game continues

					if(board[i][p.get_col()].ID()==2){
						cout<<"You killed the Wumpus!"<<endl;
						over=true;
					}

				}

				if(over==false){
										//if you miss check how many arrows are left. If there are no arrows left the game is over (over=true)
				if(p.shoot()==0)
					cout<<"You're out of arrows, you lose"<<endl;
					over=true;
				}
			}
	//************************************************************************************************

		if(dir=='e'){		

			for(int i=p.get_col();i<size;i++){		//check each cell for a wumpus. If there is one you win, if not arrows=arrows-1 and game continues

					if(board[p.get_row()][i].ID()==2){
						cout<<"You killed the Wumpus!"<<endl;
						over=true;
					}

			}

		
			if(over==false){
										//if you miss check how many arrows are left. If there are no arrows left the game is over (over=true)
				if(p.shoot()==0){
					cout<<"You're out of arrows, you lose"<<endl;
					over=true;
				}
			}
		}

	//************************************************************************************************
		if(dir=='w'){		

				for(int i=p.get_col();i=0;i--){		//check each cell for a wumpus. If there is one you win, if not arrows=arrows-1 and game continues

					if(board[p.get_row()][i].ID()==2){
						cout<<"You killed the Wumpus!"<<endl;
						over=true;
					}

				}

			if(over==false){
										//if you miss check how many arrows are left. If there are no arrows left the game is over (over=true)
				if(p.shoot()==0){
					cout<<"You're out of arrows, you lose"<<endl;
					over=true;
				}
			}
		}
	//************************************************************************************************

			}

	//*************************************fire*******************************************************

			
	}



	cout<<"New game? (y,n) ";
	cin>>choice;

	if(choice=='y')
		newgame=true;
	if(choice=='n')
		exit(0);//reprompt here for new game or quit
	if(choice!='y' && choice != 'n'){
		cout<<"Invalid choice, game ended"<<endl;
		exit(0);
		}

	}
}
/*********************************************************************
** Function: game destructor
** Description: destorys game
** Parameters: n/a
** Pre-Conditions:
** Post-Conditions:
*********************************************************************/
game::~game(){



	for(int i=0;i<size;i++){

			delete [] board[i];
	}

	delete [] board;
}
