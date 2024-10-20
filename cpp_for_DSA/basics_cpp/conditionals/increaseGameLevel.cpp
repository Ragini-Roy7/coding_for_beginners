// increase game level of user on basis of score scored by them
#include <iostream>
using namespace std;
int main()
{
    int score;
    // assuming game_level_user = 67;
    int current_level= 67;
    cout << "enter your score in the game : ";
    cin>>score;
    if(score >=1000) {
        current_level++;
        cout << "Game level increased by +1. Current level: " << current_level << endl;
    }
    else if (score==1000) {
        cout << "game level not increased , play more to increase ";
    }
    else {
        cout << "keep playing ";
    }

}