#include <iostream>
using namespace std;
int main()
{
    string player1, name1;
    cout << "\nEnter your name " << endl;
    cin >> name1;
    cout << "\nEnter Rock Paper Scissors" << endl;
    cin >> player1;

    string player2, name2;
    cout << "\nEnter your name " << endl;
    cin >> name2;
    cout << "\nEnter Rock Paper Scissors " << endl;
    cin >> player2;

    while (true)
    {
        if (player1 == "ROCK" && player2 == "PAPER")
        {
            cout << "# Player 2 is " << name2 << " is the winner #" << endl;
            return main();
        }
        else if (player1 == "ROCK" && player2 == "SCISSORS")
        {
            cout << "# Player 1 is " << name1 << " is the winner #" << endl;
            return main();
        }
        else if (player1 == "PAPER" && player2 == "SCISSORS")
        {
            cout << "# Player 2 is " << name2 << " is the winner #" << endl;
            return main();
        }
        else if (player1 == "PAPER" && player2 == "ROCK")
        {
            cout << "# Player 1 is " << name1 << " is the winner #" << endl;
            return main();
        }
        else if (player1 == "SCISSORS" && player2 == "ROCK")
        {
            cout << "# Player 2 is " << name2 << " is the winner #" << endl;
            return main();
        }
        else if (player1 == "SCISSORS" && player2 == "PAPER")
        {
            cout << "# Player 1 is " << name1 << " is the winner #" << endl;
            return main();
        }
        else
        {
            cout << "# Tie #" << endl;
            return main();
        }
    }
}