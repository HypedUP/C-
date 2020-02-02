#include <iostream>
using namespace std;

//prototypes
void findPrime(int,int);


int main()
{
	//variales
	
	for(int i = 3; i < 1000; i++)
	{
		
		findPrime(i,i);
	}
	
	return 0;
	
}


void findPrime(int num1,int num2)
{
	int prime1 = 0;
	int prime2 = 0;
	double result = 0;
	
	prime1 = num1 % 2;
	if(prime1 != 0)
	{
		prime1 = num1 % 3;
		if(prime1 != 0)
		{
			prime1 = num1;
		}
	}
	
	prime2 = (num2 + 1) % 2;
	if(prime2 != 0)
	{
		prime2 = (num2 + 1) % 3;
		if(prime2 != 0)
		{
			prime2 = (num2 + 1);
			cout << prime2;
		}
	}
	
	if(result == 2)
	{
		cout << prime1 << " and " << prime2 << " are prime twins." << endl;
	}
	
	
	
	
}
