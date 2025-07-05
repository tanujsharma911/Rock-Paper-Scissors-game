#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int player1, player2 = rand() % 3; // 0 for rock, 1 for paper, 2 for scissor

    cout<<"            Rock Paper Scissors \n";
    cout<<"\nType (0) for rock, (1) for paper and (2) for scissors: ";
    cin>>player1;

    cout<<"\nYour choise is ";
    if (player1 == 0)
    {
        cout<<"ROCK";
    } 
    else if (player1 == 1) 
    {
        cout<<"PAPER";
    } 
    else 
    {
        cout<<"SCISSOR";
    }
    cout<<"\nComputer choise is ";
    if (player2 == 0)
    {
        cout<<"ROCK";
    } 
    else if (player2 == 1) 
    {
        cout<<"PAPER";
    } 
    else 
    {
        cout<<"SCISSOR";
    }
    

    if(player1 == player2){
        cout<<"\n\n Tie!";
    }
    else if((player1 - player2 + 3) % 3 == 1){
        cout<<"\n\nWOW, you Won!!";
    }
    else{
        cout<<"\n\nPlayer 2 won.";
    }


    return 0;
}