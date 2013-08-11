#include<iostream>
#include <vector>
#include <string>
using namespace std;
class game 
{
public:
	

	game();
	void print();
	void scan();
	void pgame_start();
	void p_o_turn();
	void pingju();
	void winner();
	bool can_place(int);
private:
char square [10];
bool game_start;
bool o_turn ;
int a;
	
	
};
game::game()
{
	 
	for (int i = 0, ix = 10;i!=ix;++i)

	{
		square[i] = ' ';
	}
		
		cout<<"1"<<"|"<<"2"<<"|"<<"3"<<"|"<<endl;      
		cout<<"4"<<"|"<<"5"<<"|"<<"6"<<"|"<<endl;
		cout<<"7"<<"|"<<"8"<<"|"<<"9"<<"|"<<endl;
		cout<<"game is starting!"<<endl;
		game_start=true;
		o_turn = false ;
		
}
void game::print()

{


	for (int i = 1, ix = 10;i!=ix;++i)
	{
		cout<<square[i]<<"|";
		if (i%3==0)
		{
			cout<<endl;
		}
	}
	o_turn = !o_turn;
}

void game::scan()
{
	while (game_start==true)
	{
		if (o_turn==false)
		{
			cout<<" please X!"<<endl;
		} 
		else
		{
			cout<<"please O!"<<endl;
	}
		cin>>a;                   
		
		if (o_turn==false)
		{
			square[a] = 'X';
			print();                  
			
		}
		else 
		{
			square[a] = 'O';
			print();                
			
		}
		pgame_start();
		
	}
	

}
void game::pgame_start()
{
	if (a==1)
	{
		if (square[2]==square[3]&&square[1]==square[2]&&square[1]!=' '&&square[2]!=' '&&square[3]!=' ')
		{
			p_o_turn();
		
		}
		if (square[4]==square[7]&&square[1]==square[4]&&square[1]!=' '&&square[4]!=' '&&square[7]!=' ')
		{
			p_o_turn();

		}
		if (square[5]==square[9]&&square[1]==square[5]&&square[1]!=' '&&square[5]!=' '&&square[9]!=' ')
		{
			p_o_turn();
		}
	}
	if (a==2)
	{
		if (square[1]==square[3]&&square[2]==square[1]&&square[1]!=' '&&square[2]!=' '&&square[3]!=' ')
		{
		p_o_turn();
		}
		if (square[5]==square[8]&&square[2]==square[8]&&square[2]!=' '&&square[5]!=' '&&square[8]!=' ')
		{
			p_o_turn();
		}

	}
	if (a==3)
	{
		if (square[1]==square[2]&&square[1]==square[3]&&square[1]!=' '&&square[2]!=' '&&square[3]!=' ')
		{
			p_o_turn();
		}
		if (square[6]==square[9]&&square[3]==square[6]&&square[3]!=' '&&square[3]!=' '&&square[9]!=' ')
		{
			p_o_turn();
		}
		if (square[5]==square[7]&&square[3]==square[5]&&square[3]!=' '&&square[5]!=' '&&square[7]!=' ')
		{
			p_o_turn();
		}
	}
	if (a==4)
	{
		if (square[5]==square[6]&&square[4]==square[6]&&square[4]!=' '&&square[5]!=' '&&square[6]!=' ')
		{
			p_o_turn();
		}
		if (square[1]==square[7]&&square[4]==square[1]&&square[1]!=' '&&square[4]!=' '&&square[7]!=' ')
		{
			p_o_turn();
		}
	}
	if (a==5)
	{
		if (square[4]==square[6]&&square[5]==square[4]&&square[4]!=' '&&square[5]!=' '&&square[6]!=' ')
		{
			p_o_turn();
		}
		if (square[2]==square[8]&&square[5]==square[8]&&square[2]!=' '&&square[5]!=' '&&square[8]!=' ')
		{
			p_o_turn();
		}
		if (square[1]==square[9]&&square[5]==square[9]&&square[1]!=' '&&square[5]!=' '&&square[9]!=' ')
		{
			p_o_turn();
		}
		if (square[3]==square[7]&&square[5]==square[7]&&square[3]!=' '&&square[5]!=' '&&square[7]!=' ')
		{
			p_o_turn();
		}
	}
	if (a==6)
	{
		if (square[4]==square[5]&&square[4]==square[6]&&square[4]!=' '&&square[5]!=' '&&square[6]!=' ')
		{
			p_o_turn();
		}
		if (square[3]==square[9]&&square[6]==square[3]&&square[3]!=' '&&square[6]!=' '&&square[9]!=' ')
		{
			p_o_turn();
		}

	}
	if (a==7)
	{
		if (square[8]==square[9]&&square[7]==square[8]&&square[7]!=' '&&square[8]!=' '&&square[9]!=' ')
		{
			p_o_turn();
		}
		if (square[1]==square[4]&&square[7]==square[1]&&square[1]!=' '&&square[4]!=' '&&square[7]!=' ')
		{
			p_o_turn();
		}
		if (square[3]==square[5]&&square[3]==square[7]&&square[3]!=' '&&square[5]!=' '&&square[7]!=' ')
		{
			p_o_turn();
		}
	}
	if (a==8)
	{
		if (square[7]==square[8]&&square[7]==square[9]&&square[7]!=' '&&square[8]!=' '&&square[9]!=' ')
		{
			p_o_turn();
		}
		if (square[2]==square[5]&&square[2]==square[8]&&square[2]!=' '&&square[5]!=' '&&square[8]!=' ')
		{
			p_o_turn();
		}


	}
	if (a==9)
	{
		if (square[7]==square[8]&&square[7]==square[9]&&square[7]!=' '&&square[8]!=' '&&square[9]!=' ')
		{
			p_o_turn();
		}
		if (square[1]==square[5]&&square[9]==square[1]&&square[1]!=' '&&square[5]!=' '&&square[9]!=' ')
		{
			p_o_turn();
		}
	}
	pingju();


}
void game::p_o_turn()
{
	if (o_turn==false)
	{
		cout<<"game over winner is O!"<<endl;
		game_start=false;
	}
	if (o_turn==true)
	{
		cout<<"game over winner is X!"<<endl;
		game_start=false;
	}
}
void game ::pingju()
{
	if (square[1]!=' '&&square[2]!=' '&&square[3]!=' '&&square[4]!=' '&&square[5]!=' '&&square[6]!=' '&&square[7]!=' '&&square[8]!=' '&&square[9]!=' '&&game_start==true)
	{
		cout<<"no winner!"<<endl;
		game_start=false;

	}

}
void game::winner()
{

}
bool game::can_place(int a)
{
	if (square[a]==' ')
	{
		return true;
	}
	if (square[a]!=' ')
	{
		return false;
	}


}


int main ()
{




	game X;                    
    
    X.scan(); 
    int i;
	cin>>i;
	
    

	  
	
	
	
	
	return 0;
}