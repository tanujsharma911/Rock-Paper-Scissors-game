#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    int playerChoice;
    int computerChoice = rand() % 3; // Generate a random choice for the computer (0, 1, or 2)

    cout << "Enter your choice (0 for rock, 1 for paper, 2 for scissors): ";
    cin >> playerChoice;

    // Determine the winner
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice - computerChoice + 3) % 3 == 1) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}