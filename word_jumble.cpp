// Confusao de palavras
// O classico jogo de palvras misturadas onde o jogador pode pedir uma dica

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields {WORD, DICA, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS] [NUM_FIELDS] =
    {
        {"parede", "Voce sente que esta batendo sua cabeca contra alguma coisa?"},
        {"oculos", "Podem ajuda-lo a ver a resposta."},
        {"trabalhoso", "Indo devagar, nao e?"},
        {"persistente", "Continue."},
        {"confusao", "E disso que se trata o jogo."}
    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD]; // palavra para adivinhar
    string theHint = WORDS[choice][DICA]; // dica para palavra
    string jumble = theWord; // versao confusa da palvra
    int length = jumble.size();
    for (int i=0; i<length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout << "\t\t\tBem-vindo a Confusao de Palavras!\n\n";
    cout << "Decifre as letras para formar uma palavra.\n";
    cout << "Insira 'dica' para uma dica.\n";
    cout << "Digite 'sair' para sair do jogo.\n\n";
    cout << "A confusao e: " << jumble;

    string guess;
    cout << "\n\nSeu palpite: ";
    cin >> guess;

    while ((guess != theWord) && (guess != "sair"))
    {
        if (guess == "dica")
        {
            cout << theHint;
        }
        else
        {
            cout << "Desculpe, nao e isso.";
        }

        cout << "\n\nSeu palpite: ";
        cin >> guess;
    }
    
    if (guess == theWord)
    {
        cout << "\nE isso!   Voce adivinhou!\n";
    }
    
    cout << "\nObrigado por jogar.\n";

    return 0;

}