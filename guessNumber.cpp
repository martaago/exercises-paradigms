// Guess My Number
// The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); //seed random number generator

    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    int tries = 0;
    int guess;

    cout << "\t------Bem-vindo ao adivinhe meu numero------\n\n";

    do
    {
        cout << "Insira um palpite: ";
        cin >> guess;
        ++tries;

        if (guess > secretNumber)
        {
            cout << "Muito alto!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Muito baixo!\n\n";
        }
        else
        {
            cout << "\nE isso! Voce conseguiu " << tries << " suposicoes!\n";
        }
        
    } while (guess != secretNumber);
    
    return 0;
}
