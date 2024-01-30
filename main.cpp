#include <iostream>
#include <string>
using namespace std;

void rps(int selectionPlr1, int selectionPlr2)
{
    if (selectionPlr1 == selectionPlr2)
        cout << "Tie";
    else if (selectionPlr1 == 1 && selectionPlr2 == 2)
    {
        cout << "Player 2 Wins!";
    }
    else if (selectionPlr1 == 1 && selectionPlr2 == 3)
    {
        cout << "Player 1 Wins!";
    }
    else if (selectionPlr1 == 2 && selectionPlr2 == 1)
    {
        cout << "Player 1 Wins!";
    }
    else if (selectionPlr1 == 2 && selectionPlr2 == 3)
    {
        cout << "Player 2 Wins!";
    }
    else if (selectionPlr1 == 3 && selectionPlr2 == 1)
    {
        cout << "player 2 Wins!";
    }
    else if (selectionPlr1 == 3 && selectionPlr2 == 2)
    {
        cout << "Player 1 Wins!";
    }
}

int main()
{
    int selectionPlr1 {};
    int selectionPlr2 {};

     while (selectionPlr1 != 1 && selectionPlr1 != 2 && selectionPlr1 != 3)
    {
        cout << "Player 1 make a selection:\n";
        cout << "1) Rock\n";
        cout << "2) Paper\n";
        cout << "3) Scissors\n";
        
        cin >> selectionPlr1;
    }

    cout << "Player 1 Selection: " << selectionPlr1 << "\n";

    while (selectionPlr2 != 1 && selectionPlr2 != 2 && selectionPlr2 != 3)
    {
        cout << "Player 2 make a selection:\n";
        cout << "1) Rock\n";
        cout << "2) Paper\n";
        cout << "3) Scissors\n";
        
        cin >> selectionPlr2;
    }

    cout << "Player 2 Selection: " << selectionPlr2 << "\n";

    rps(selectionPlr1, selectionPlr2);

    return 0;
}

