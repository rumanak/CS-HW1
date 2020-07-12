// Rumana Khan 
// cs1 hw#4 
// 2/17/19

#include <iostream>
using namespace std;
int main ()
{
    // intro to game 
    cout << "Welcome to the game, Campus Quest!";
    cout << "You are currently 14 miles away from campus." << endl;
    cout << "You can travel by bus, subway, and ram van."; 
    cout << "The bus moves 2 miles per turn. The subway moves 3 miles per turn. " << endl;
    cout << "Finally, the ram van moves 10 miles per turn.";
    cout << "You have four turns to win!" << endl;
    
    int t = 1;
    int m = 14;
    int bus = -2;
    int subway = -3;
    int ram = -10;
    int miles_left;
    char input;
    
    while (t <= 4)
    {
         cout << "How would you like to travel? [B]us [S]ubway [R]am Van" << endl;
    cin >> input;
        switch (input) 
    {
        case 'b':
        case 'B':
              miles_left = m + bus;
              cout << "You are now " << miles_left << " miles away." << endl; 
              m = miles_left;
              break;
        case 's':
        case 'S':
              miles_left = m + subway;
              cout << "You are now " << miles_left << " miles away." << endl;
              m = miles_left;
              break;
        case 'r':
        case 'R':
              miles_left = m + ram;
              cout << "You are now " << miles_left << " miles away." << endl;
              m = miles_left; 
              break;
        default : 
              cout << "That is not a choice. Do it again.\n";
              t -= 1;
    }
        if (miles_left == 0)
        {   cout << "YOU WON!!!" << endl;
                   t = 4; }
        else if (miles_left < 0)
       {    int finalmile;
            finalmile = 0 - miles_left;
            cout << "You have overshot! You are " << finalmile << " miles over! You lose!" << endl;
              t = 4;}
        t ++; 
    }
       
    if (miles_left > 0)
            cout << "You ran out of turns. You lost." << endl;
    
    
     
    return 0;
}



        



