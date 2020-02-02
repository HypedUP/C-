#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Prototypes
int pointGame(int point);

int main()
{
	srand(time(0));
	//variables
	int point = 0;
	int lose = 0;
	int roll = 0;
	int y = 0;
	
	
	srand(time(0));
	
	do
	{
	roll = (1 + (rand() % 6)) + (1 + (rand() % 6));
	
	
		if(roll == 7 || roll == 11)
		{
			cout << "You rolled: "<< roll << " Congratulations you win!" << endl;
			return 0;
		}
		
		else if(roll == 2 || roll == 3 || roll == 12)
		{
			cout << "You rolled: " << roll <<  " Sorry you lose!" << endl;
			return 0;
		}
		
		else if(roll > 3 || roll < 11);
		{
			point = roll;
			cout << "You rolled: " << roll << endl;
			cout << "Your point is: " << point << endl;
			cout << "Would you like to roll again? (Enter 0 for YES and Enter -1 for NO) " ;
			cin >> y;
			if(y == 0)
			{
				pointGame(point);
			}
			
		}
	}
	while(y = 0);
	
	return 0;
}

int pointGame(int point)
{
	int roll = 0;
	
	do
	{
		roll = (1 + (rand() % 6)) + (1 + (rand() % 6));
		cout << "You rolled: " << roll << endl;
		if(roll == point)
		{
			cout << "Congratulations You Win!";
		}
		else if(roll == 7)
		{
			cout << "Sorry You LOSE!";
		}
		else if(roll != 7)
		{
			cout << "You rolled: " << roll << endl;
		}
		
		
	}
	while(roll != 7);
	
}


