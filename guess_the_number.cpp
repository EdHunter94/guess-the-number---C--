#include <iostream>
using namespace std;

int main()
{
    signed int number, guess;
    number = 67;
    
    cout << "Please enter a number 1-100:";
    cin >> guess;
    
    bool playing = true;

    while(playing == true)
    {
    
        if (guess > number)
        {
            cout << "Lower!:\n" << "Guess again:\n";
            cin >> guess;
        }
        
        else if (guess < number)
        {
            cout << "Higher!\n" << "Guess again:\n";
            cin >> guess;
        }
        
        else if (guess == number)
        {
            cout << "Correct!\n";
            playing = false;
        }
        
        else
        {
            cout << "Please enter a number 1-100:\n";
            cin >> guess;
        }
        
    }
    
    cout << "Game Over.\n";

    system("pause");
    return 0;    
}
