#include <iostream>
#include <cstdlib>
#include <random>
#include "Functions.h"


using namespace std;

int main()
{
    int Cards[52] = {};
     char Suit[4] = {'S','C','D','H'};

    //Variables
    bool again = 1;
    bool correct = 0;
    int gFace = 0;
    char gSuit;
    int option;
    int *ptrC = Cards;
     char *ptrS = Suit;

    //Function Calls
    Functions call;
    call.assign(Cards);

    while(again == 1)
    {
        cout << "Enter 1 for guessing Face Value.\n Enter 2 for guessing Suit of card. \n Enter 3 for guessing BOTH FaceValue and Suit";
        cin >> option;
        switch(option)
        {
            case '1': //call shuffle and draw
                shuffle(ptrC,ptrC + 25,rand());
                cout << "\nPlease type your guess on Facevalue: ";
                cin >> gFace;
                call.checkFace(gFace,*Cards);

                break;

            case '2': //call shuffle and draw
                shuffle(ptrS,ptrS + 25,rand());
                cout << "\nPlease type your guess on Suit: ";
                cin >> gSuit;
                call.checkSuit(gSuit,*Suit);

                break;

            case '3': //call shuffle and draw
                shuffle(ptrC,ptrC + 25,rand());
                shuffle(ptrS,ptrS + 25,rand());
                cout << "Please enter your Facevalue first (eg:1-13):";
                cin >> gFace;
                cout << "\nNow enter the First initial of the Suit (eg:S,C,D,H):";
                cin >> gSuit;
                call.checkBoth(gFace,gSuit,*Cards,*Suit);
                break;
            default:
            cout << "Invalid input";
        }

    }



    return 0;
}
