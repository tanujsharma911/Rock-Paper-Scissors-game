#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printChoice(int, int);

int main()
{
    srand(time(0));

    int player1, player2, continueGame = 1; // 0 for rock, 1 for paper, 2 for scissor

    cout << "            Rock Paper Scissors \n";

    while (continueGame)
    {

        player2 = rand() % 3; // generate random choice for computer

        cout << "\nType (0) for rock, (1) for paper and (2) for scissors: ";
        cin >> player1;

        printChoice(1, player1); // print player 1 choice
        printChoice(2, player2); // print player 1 choice

        if (player1 == player2)
        {
            cout << "\n\n Tie!";
        }
        else if ((player1 - player2 + 3) % 3 == 1)
        {
            cout << "\n\nWOW, you Won!!";
        }
        else
        {
            cout << "\n\nPlayer 2 won.";
        }

        cout<<"\n\n Do you want to continue the game\n  (1) for Yes\n  (0) for No\n";
        cin >> continueGame;
    }

    return 0;
}

void printChoice(int p, int c)
{
    // if p is 1 then player1
    // if p is 2 then player2

    // if c is 0 then rock
    // if c is 1 then paper
    // if c is 2 then scioors

    if (p == 1)
    {
        cout << "\nYour choise is ";
    }
    else
    {
        cout << "\nPlayer 2 choise is ";
    }

    if (c == 0)
    {
        cout << "ROCK";
    }
    else if (c == 1)
    {
        cout << "PAPER";
    }
    else
    {
        cout << "SCISSOR";
    }
}