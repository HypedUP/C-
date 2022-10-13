#ifndef FUNCTIONS_H
#define FUNCTIONS_H


class Functions
{
    public:
        Functions();


    void assign(int Cards[])
    {
        for(int i = 0; i < 52;i++ )
        {
           Cards[i] = i+1;
        }
    }//endAssign

    bool checkFace(int f,int face)
    {
        if(f == face)
        {
            cout << "Congratulations! YOU WIN!\n";
            cout << "Face card that was drawn was: " << face;
            return true;
        }
        else
        {
            cout << "Sorry! You Lose! Good try.\n";
            return false;
        }

    }//endCheckFace

    bool checkSuit(char s,char suit)
    {
        if(s == suit)
        {
            cout << "Congratulations! YOU WIN!\n";
            cout << "Suit card that was drawn was: " << suit;
            return true;
        }
        else
        {
            return false;
            cout << "Sorry! You Lose! Good try.\n";
        }

    }

    bool checkBoth(int f,char s,int face, char suit)
    {
        if(f == face & s == suit)
        {
            cout << "Congratulations! You WIN!\n";
            cout << "Card drawn was Face: " << face << "Suit: " << suit;
            return true;
        }
        else
        {
            cout << "Sorry! You Lose! Good try.\n";
            return false;
        }

    }

    protected:

    private:
};

#endif // FUNCTIONS_H
